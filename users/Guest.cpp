//
// Created by Professional on 28.03.2021.
//
#include "Guest.h"

Guest::Guest(const string &fName, const string &lName) : User(fName, lName) {
    this->userType = USER_GUEST;
    this->levelType = LEVEL_BLUE;
}


