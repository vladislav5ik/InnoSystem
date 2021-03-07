//
// Created by Professional on 07.03.2021.
//

#include "DirectorCabinetRoom.h"

DirectorCabinetRoom::DirectorCabinetRoom(const string &roomName) : Room(roomName) {
    this->roomType = ROOM_DIRECTOR_CABINET;
}