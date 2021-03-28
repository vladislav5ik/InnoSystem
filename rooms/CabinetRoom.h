//
// Created by Professional on 07.03.2021.
//

#ifndef HW2_CABINETROOM_H
#define HW2_CABINETROOM_H

#include "Room.h"

class CabinetRoom : public Room {
protected:
    bool enterRoom(LevelType levelType, UserType userType);

public:
    CabinetRoom(const string &roomName, int roomFloor);
};


#endif //HW2_CABINETROOM_H
