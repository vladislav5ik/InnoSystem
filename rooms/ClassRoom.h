//
// Created by Professional on 07.03.2021.
//

#ifndef HW2_CLASSROOM_H
#define HW2_CLASSROOM_H

#include "Room.h"

class ClassRoom : public Room {
protected:
    bool enterRoom(LevelType levelType, UserType userType);

public:
    ClassRoom(const string &roomName, int roomFloor);
};

#endif //HW2_CLASSROOM_H
