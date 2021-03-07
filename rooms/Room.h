//
// Created by Professional on 07.03.2021.
//

#ifndef HW2_ROOM_H
#define HW2_ROOM_H

#include <string>
#include "RoomTypes.h"

using namespace std;

class Room {
protected:
    int roomId; //internal id for access management.
    string roomName;
    RoomType roomType;
    static int roomCount; //Count of instances of class. Needed for roomId creation.
    explicit Room(const string &roomName); //protected because we cannot create just room without it is type
public:
    string getRoomName();
    string getStringRoomType();
    int getRoomId();
    void changeRoomName(const string &roomName);

    RoomType getRoomType();

};


#endif //HW2_ROOM_H
