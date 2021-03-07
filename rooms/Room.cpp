//
// Created by Professional on 07.03.2021.
//

#include "Room.h"

int Room::roomCount = 0;

Room::Room(const string &roomName) {
    this->roomName = roomName;
    roomId = roomCount++;
}

string Room::getRoomName() {
    return roomName;
}

void Room::changeRoomName(const string &roomName) {
    this->roomName = roomName;
}

RoomType Room::getRoomType() {
    return roomType;
}

int Room::getRoomId() {
    return this->roomId;
}

string Room::getStringRoomType() {
    switch (roomType) {
        case ROOM_LECTURE:
            return "lecture";
        case ROOM_CLASS:
            return "class";
        case ROOM_CONFERENCE:
            return "conference";
        case ROOM_CABINET:
            return "cabinet";
        case ROOM_DIRECTOR_CABINET:
            return "director cabinet";
    }
}
