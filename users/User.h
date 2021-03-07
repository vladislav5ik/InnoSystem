//
// Created by Professional on 07.03.2021.
//

#ifndef HW2_USER_H
#define HW2_USER_H

#include "string"
#include <set>
#include "UserTypes.h"
#include "LevelTypes.h"
#include "../rooms/Room.h"
#include "iostream"
using namespace std;

class User {
protected:
    string fName;
    string lName;
    UserType userType;
    LevelType levelType;
    set<int> uniqueAccessRoomIds;
    User(const string &fName, const string &lName);
public:
    string getFirstName();
    string getLastName();
    string getStringUserType();
    bool setAccessLevel(User& user, LevelType setLevelType);
    bool setSpecificRoomAccess(User& user, Room setRoom);
    bool enterRoom(Room room);
};





#endif //HW2_USER_H
