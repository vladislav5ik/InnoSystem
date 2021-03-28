//
// Created by Professional on 07.03.2021.
//

#ifndef HW2_ROOM_H
#define HW2_ROOM_H

#include <string>
#include "RoomTypes.h"
#include "../users/LevelTypes.h"
#include "../users/User.h"

using namespace std;

class User;

class Room {
protected:
    friend class User; //for accessing enterRoom method
    virtual bool enterRoom(LevelType levelType, UserType userType);

    int roomId; //internal id for access management.
    int roomFloor;
    string roomName;
    RoomType roomType;
    static int roomCount; //Count of instances of class. Needed for roomId creation.
    static bool emergencyStatus;

    explicit Room(const string &roomName,
                  int roomFloor); //protected because we cannot create just room without it is type
public:
    int getRoomFloor() const;

    string getRoomName();

    string getStringRoomType();

    int getRoomId();

    void changeRoomName(const string &roomName);

    static void setEmergencyStatus(bool status);

    static bool isEmergency();

    RoomType getRoomType();

};


#endif //HW2_ROOM_H
