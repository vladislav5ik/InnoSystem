//
// Created by Professional on 07.03.2021.
//

#include "LectureRoom.h"

LectureRoom::LectureRoom(const string &roomName, int roomFloor) : Room(roomName, roomFloor) {
    this->roomType = ROOM_LECTURE;
}

bool LectureRoom::enterRoom(LevelType levelType, UserType userType) {
    if (levelType >= LEVEL_NO_LEVEL ||
        (levelType == LEVEL_BLUE && this->getRoomFloor() == 1)) {
        return true;
    }
    return false;
}
