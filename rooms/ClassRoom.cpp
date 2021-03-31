//
// Created by Professional on 07.03.2021.
//

#include "ClassRoom.h"

ClassRoom::ClassRoom(const string &roomName, int roomFloor) : Room(roomName, roomFloor) {
    this->roomType = ROOM_CLASS;
}

bool ClassRoom::enterRoom(LevelType levelType, UserType userType) {
    if (levelType >= LEVEL_GREEN ||
        (levelType == LEVEL_NO_LEVEL && userType == USER_STUDENT)) {
        return true;
    }
    return false;
}