//
// Created by Professional on 07.03.2021.
//

#include "Director.h"

Director::Director(const string &fName, const string &lName, string bestJoke) : User(fName, lName) {
    this->userType = USER_DIRECTOR;
    this->levelType = LEVEL_RED;
    this->bestJoke = bestJoke;
}
