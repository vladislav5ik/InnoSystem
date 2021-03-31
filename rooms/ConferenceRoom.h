//
// Created by Professional on 07.03.2021.
//

#ifndef HW2_CONFERENCEROOM_H
#define HW2_CONFERENCEROOM_H

#include "Room.h"

class ConferenceRoom : public Room {
protected:
    bool enterRoom(LevelType levelType, UserType userType);

public:
    ConferenceRoom(const string &roomName, int roomFloor);
};


#endif //HW2_CONFERENCEROOM_H
