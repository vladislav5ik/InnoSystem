//
// Created by Professional on 07.03.2021.
//

#ifndef HW2_LECTUREROOM_H
#define HW2_LECTUREROOM_H

#include "Room.h"

class LectureRoom : public Room {
protected:
    bool enterRoom(LevelType levelType, UserType userType) override;

public:
    LectureRoom(const string &roomName, int roomFloor);
};

#endif //HW2_LECTUREROOM_H
