//
// Created by Professional on 07.03.2021.
//

#include "CabinetRoom.h"

CabinetRoom::CabinetRoom(const string &roomName, int roomFloor) : Room(roomName, roomFloor) {
    this->roomType = ROOM_CABINET;
}

bool CabinetRoom::enterRoom(LevelType levelType, UserType userType) {
    if (levelType >= LEVEL_RED ||
        (levelType == LEVEL_YELLOW && userType == USER_PROFESSOR)) {
        return true;
    }
    return false;
}