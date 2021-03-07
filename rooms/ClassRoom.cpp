//
// Created by Professional on 07.03.2021.
//

#include "ClassRoom.h"

ClassRoom::ClassRoom(const string &roomName) : Room(roomName) {
    this->roomType = ROOM_CLASS;
}