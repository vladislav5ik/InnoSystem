//
// Created by Professional on 07.03.2021.
//

#include "ConferenceRoom.h"

ConferenceRoom::ConferenceRoom(const string &roomName, int roomFloor) : Room(roomName,
                                                                             roomFloor) { //update README with floor information
    this->roomType = ROOM_CONFERENCE;
}

bool ConferenceRoom::enterRoom(LevelType levelType, UserType userType) {
    if (levelType >= LEVEL_YELLOW ||
        (levelType == LEVEL_BLUE && this->getRoomFloor() == 1)) {
        return true;
    }
    return false;
}