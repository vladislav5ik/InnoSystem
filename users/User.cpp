//
// Created by Professional on 07.03.2021.
//

#include "User.h"


User::User(const string &fName, const string &lName) {
    this->fName = fName;
    this->lName = lName;
}


bool User::setAccessLevel(User &user, LevelType grantLevelType) {
    if (this->levelType < LEVEL_ADMIN) {
        return false;
    }

    user.levelType = grantLevelType;
    return true;
}

bool User::setSpecificRoomAccess(User &user, Room grantRoom) {
    if (this->levelType < LEVEL_ADMIN) {
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
        case USER_GUEST:
            return "guest";
        case USER_STUDENT:
            return "student";
        case USER_LAB_EMPLOYEE:
            return "lab employee";
        case USER_PROFESSOR:
            return "professor";
        case USER_DIRECTOR:
            return "director";
        case USER_ADMIN:
            return "admin";

    }
}

bool User::enterRoom(Room &room) {
    if (Room::isEmergency()) {
        return true;
    }
    //check if unique access to that room
    if (uniqueAccessRoomIds.find(room.getRoomId()) != uniqueAccessRoomIds.end()) {
        return true;
    }
    return room.enterRoom(this->levelType, this->userType);
}



