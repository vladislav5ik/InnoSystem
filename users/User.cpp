//
// Created by Professional on 07.03.2021.
//

#include "User.h"


User::User(const string &fName, const string &lName) {
    this->fName = fName;
    this->lName = lName;
}

bool User::enterRoom(Room room) {
    bool is_enter = false;
    switch (room.getRoomType()) {
        case ROOM_LECTURE:
            is_enter = (this->levelType >= LEVEL_EMPTY);
            break;
        case ROOM_CLASS:
            is_enter = (this->levelType >= LEVEL_GREEN) || (this->userType >= USER_STUDENT);
            break;
        case ROOM_CONFERENCE:
            is_enter = (this->levelType >= LEVEL_YELLOW);
            break;
        case ROOM_CABINET:
            is_enter = (this->levelType >= LEVEL_RED) || (this->userType >= USER_PROFESSOR);
            break;
        case ROOM_DIRECTOR_CABINET:
            is_enter = (this->levelType >= LEVEL_RED);
            break;
    }

    //check if unique access to that room
    if (!is_enter && (uniqueAccessRoomIds.find(room.getRoomId()) != uniqueAccessRoomIds.end()))
    {
        is_enter = true;
    }

    return is_enter;
}

bool User::setAccessLevel(User& user, LevelType grantLevelType) {
    if(this->levelType < LEVEL_ADMIN) {
        return false;
    }

    user.levelType = grantLevelType;
    return true;
}

bool User::setSpecificRoomAccess(User& user, Room grantRoom) {
    if(this->levelType < LEVEL_ADMIN) {
        return false;
    }

    user.uniqueAccessRoomIds.insert(grantRoom.getRoomId());
    return true;
}

string User::getFirstName() {
    return fName;
}

string User::getLastName() {
    return lName;
}

string User::getStringUserType() {
    switch (userType) {
        case USER_STUDENT: return "student";
        case USER_LAB_EMPLOYEE: return "lab employee";
        case USER_PROFESSOR: return "professor";
        case USER_DIRECTOR: return "director";
        case USER_ADMIN: return "admin";
    }
}



