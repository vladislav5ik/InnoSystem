//
// Created by Professional on 07.03.2021.
//

#include "LectureRoom.h"

LectureRoom::LectureRoom(const string &roomName) : Room(roomName) {
    this->roomType = ROOM_LECTURE;
}