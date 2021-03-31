//
// Created by Professional on 07.03.2021.
//

#ifndef HW2_DIRECTORCABINETROOM_H
#define HW2_DIRECTORCABINETROOM_H

#include "Room.h"

class DirectorCabinetRoom : public Room {
protected:
    bool enterRoom(LevelType levelType,
                   UserType userType); //todo override all enterRoom methods? In each class same construction (how to avoid?)
public:
    DirectorCabinetRoom(const string &roomName, int roomFloor);
};


#endif //HW2_DIRECTORCABINETROOM_H
