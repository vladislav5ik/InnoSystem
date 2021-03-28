//
// Created by Professional on 28.03.2021.
//

#ifndef HW2_GUEST_H
#define HW2_GUEST_H


#include "User.h"

class Guest : public User {
public:
    Guest(const string &fName, const string &lName);
};


#endif //HW2_GUEST_H
