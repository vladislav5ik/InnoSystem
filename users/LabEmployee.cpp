//
// Created by Professional on 07.03.2021.
//

#include "LabEmployee.h"

LabEmployee::LabEmployee(const string &fName, const string &lName) : User(fName, lName) {
    this->userType = USER_LAB_EMPLOYEE;
    this->levelType = LEVEL_GREEN;
}
