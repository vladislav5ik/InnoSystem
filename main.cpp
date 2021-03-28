#include <iostream>
#include <string>
#include <vector>

#include "rooms/Room.h"
#include "rooms/LectureRoom.h"
#include "rooms/ConferenceRoom.h"
#include "rooms/ClassRoom.h"
#include "rooms/CabinetRoom.h"
#include "rooms/DirectorCabinetRoom.h"

#include "users/Guest.h"
#include "users/Student.h"
#include "users/LabEmployee.h"
#include "users/Professor.h"
#include "users/Director.h"
#include "users/Admin.h"


using namespace std;


void massEnter(vector<User> &users, Room &room) {
    for (auto user : users) {
        if (user.enterRoom(room)) {
            cout << "[+] ";
        } else {
            cout << "[-] ";
        }
        cout << user.getStringUserType() + " " + user.getFirstName() + " " + user.getLastName() +
                " -> " + room.getStringRoomType() + " '" + room.getRoomName() +
                "' (" << room.getRoomFloor() << " floor)" << endl;
    }
}


int main() {
    vector<User> students; // 16 items
    students.push_back(Student("Elsie", "Morton"));
    students.push_back(Student("Jay", "Hutchinson"));
    students.push_back(Student("Robin", "Booth"));
    students.push_back(Student("Gloria", "Pham"));
    students.push_back(Student("Isabelle", "Rice"));
    students.push_back(Student("Aidan", "Aguilar"));
    students.push_back(Student("Marie", "Mckinney"));
    students.push_back(Student("Ray", "Henry"));
    students.push_back(Student("Dorothy", "Baker"));
    students.push_back(Student("Iqra", "Ross"));
    students.push_back(Student("Demi", "Arnold"));
    students.push_back(Student("Gemma", "Pratt"));
    students.push_back(Student("Esther ", "Cummings"));
    students.push_back(Student("Kimberley", "Byrne"));
    students.push_back(Student("Cora", "Sweeney"));
    students.push_back(Student("Niamh", "Harvey"));

    vector<User> employees; // 8 items
    employees.push_back(LabEmployee("Syeda", "Franklin"));
    employees.push_back(LabEmployee("Fern", "Allen"));
    employees.push_back(LabEmployee("Gabriella", "Howell"));
    employees.push_back(LabEmployee("Troy", "Flores"));
    employees.push_back(LabEmployee("Ana", "Harris"));
    employees.push_back(LabEmployee("Khadija", "Grant"));
    employees.push_back(LabEmployee("Amelia", "Bell"));
    employees.push_back(LabEmployee("Victoria", "Miller"));

    vector<User> professors; // 4 items
    professors.push_back(Professor("Rosa", "Mccoy"));
    professors.push_back(Professor("Lauren", "Waters"));
    professors.push_back(Professor("Billy", "Ingram"));
    professors.push_back(Professor("Abby", "Williams"));

    vector<User> admins; // 2 items
    admins.push_back(Admin("Alexey", "Price"));
    admins.push_back(Admin("Mabel", "Solis", true));

    vector<User> directors; // 1 item
    directors.push_back(Director("Monica", "Garza", "everyone will pass the session"));


    LectureRoom lectureRoom = LectureRoom("108 (not bar)", 1);
    ClassRoom classRoom = ClassRoom("313", 2);
    ConferenceRoom conferenceRoom = ConferenceRoom("3-3", 3);
    CabinetRoom cabinetRoom = CabinetRoom("410", 4);
    DirectorCabinetRoom directorCabinetRoom = DirectorCabinetRoom("Director's apartments", 5);


    massEnter(students, lectureRoom); //ok
    massEnter(professors, classRoom); //ok
    massEnter(students, cabinetRoom); // no one can enter
    massEnter(professors, directorCabinetRoom); // no one can enter

    admins[0].setSpecificRoomAccess(students[0], directorCabinetRoom);
    cout << endl << "now only first student can enter" << endl;
    massEnter(students, directorCabinetRoom);

    for (auto &student : students) {
        admins[1].setAccessLevel(student, LEVEL_RED);
    }

    cout << endl << "now all student can enter" << endl;
    massEnter(students, directorCabinetRoom);

    for (auto &student : students) {
        admins[1].setAccessLevel(student, LEVEL_NO_LEVEL);
    }

    cout << endl << "access for the first student still remains" << endl;
    massEnter(students, directorCabinetRoom);

    cout << endl << "Emergency situation, leave the building immediately!" << endl;
    Room::setEmergencyStatus(true);
    massEnter(students, lectureRoom);
    massEnter(professors, classRoom);
    massEnter(students, cabinetRoom);
    massEnter(professors, directorCabinetRoom);
    Room::setEmergencyStatus(false); //false alarm :)

    vector<User> guests; // 4 items
    guests.push_back(Guest("Dennis", "Watts"));
    guests.push_back(Guest("Hazel", "Ramsey"));
    guests.push_back(Guest("Lonnie", "Shaw"));
    guests.push_back(Guest("Krystal", "Burgess"));

    LectureRoom lectureRoom1floor = LectureRoom("101", 1);
    LectureRoom lectureRoom2floor = LectureRoom("202", 2);
    ConferenceRoom confRoom1floor = ConferenceRoom("1-5", 1);
    ConferenceRoom confRoom2floor = ConferenceRoom("2-6", 2);

    cout << endl << "Guests can enter in lecture and conference rooms (1 floor)" << endl;
    massEnter(guests, lectureRoom1floor);
    massEnter(guests, confRoom1floor);

    cout << endl << "Unfortunately, guests can not enter on 2nd floor" << endl;
    massEnter(guests, lectureRoom2floor);
    massEnter(guests, confRoom2floor);

    for (auto &guest : guests) {
        admins[1].setAccessLevel(guest, LEVEL_YELLOW);
    }

    cout << endl << "But if needed, access can be granted" << endl;
    massEnter(guests, lectureRoom2floor);
    massEnter(guests, confRoom2floor);

}

