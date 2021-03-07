//
// Created by Professional on 07.03.2021.
//

#include "Professor.h"

Professor::Professor(const string &fName, const string &lName) : User(fName, lName) {
    this->userType = USER_PROFESSOR;
    this->levelType = LEVEL_YELLOW;
}
