//
// Created by Professional on 07.03.2021.
//

#ifndef HW2_DIRECTOR_H
#define HW2_DIRECTOR_H


#include "User.h"

class Director : public User {
public:
    string bestJoke;
    Director(const string &fName, const string &lName, string bestJoke = "");
};


#endif //HW2_DIRECTOR_H
