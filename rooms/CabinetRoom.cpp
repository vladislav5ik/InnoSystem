//
// Created by Professional on 07.03.2021.
//

#include "CabinetRoom.h"

CabinetRoom::CabinetRoom(const string &roomName) : Room(roomName) {
    this->roomType = ROOM_CABINET;
}