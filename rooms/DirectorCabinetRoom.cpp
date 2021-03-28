//
// Created by Professional on 07.03.2021.
//

#include "DirectorCabinetRoom.h"

DirectorCabinetRoom::DirectorCabinetRoom(const string &roomName, int roomFloor) : Room(roomName, roomFloor) {
    this->roomType = ROOM_DIRECTOR_CABINET;
}

bool DirectorCabinetRoom::enterRoom(LevelType levelType, UserType userType) {
    if (levelType >= LEVEL_RED) {
        return true;
    }
    return false;
}
