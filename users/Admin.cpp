//
// Created by Professional on 07.03.2021.
//

#include "Admin.h"

Admin::Admin(const string &fName, const string &lName, bool admin_of_the_year_award) : User(fName, lName) {
    this->userType = USER_ADMIN;
    this->levelType = LEVEL_ADMIN;
    this->admin_of_the_year_award = admin_of_the_year_award;
}


