//
// Created by Professional on 07.03.2021.
//

#include "Student.h"

Student::Student(const string &fName, const string &lName) : User(fName, lName) {
    this->userType = USER_STUDENT;
    this->levelType = LEVEL_NO_LEVEL;
}
