//
// Created by Professional on 07.03.2021.
//

#ifndef HW2_ADMIN_H
#define HW2_ADMIN_H
#include "User.h"

class Admin : public User {
public:
    bool admin_of_the_year_award;
    Admin(const string &fName, const string &lName, bool admin_of_the_year_award = false);
};


#endif //HW2_ADMIN_H
