//
// Created by Professional on 07.03.2021.
//

#include "ConferenceRoom.h"

ConferenceRoom::ConferenceRoom(const string &roomName) : Room(roomName) {
    this->roomType = ROOM_CONFERENCE;
}