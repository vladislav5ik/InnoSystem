
# InnoSystem
### What's this?
This is a room access control program for university residents. It allows you to flexibly configure the university's security system so that an sleepy student doesn't accidentally open the director's room :)
### Initial Settings
The program has initial access settings, which are shown in the table below.
|                       | Student                | Lab Employee | Professor      | Director  | Admin       |
|-----------------------|------------------------|--------------|----------------|-----------|-------------|
|                       | LEVEL_EMPTY (Students) | LEVEL_GREEN  | LEVEL_YELLOW   | LEVEL_RED | LEVEL_ADMIN |
| ROOM_LECTURE          |` + `                     | `+ `           |` +`              |` + `        |` +`           |
| ROOM_CLASS            |` + ` if Student           | `+ `           | `+ `             |` + `        |` + `          |
| ROOM_CONFERENCE       |                        |              |` +   `           | `+ `        | `+`           |
| ROOM_CABINET          |                        |              |` +` if Prosessor | `+`         |` + `          |
| ROOM_DIRECTOR_CABINET |                        |              |                | `+ `        | `+`           | 
> A `+` indicates if there is access to the room for that level. 

Also for `students` and `professors` are allocated **specific conditions** for some rooms. 
In this case: a student with a yellow level of access will not be able to enter the cabinet. But a professor with a green level of access will be able to enter the cabinet. The system is very flexible and can be configured as you wish.

### Installation
- You must first import the classes from the `/users` and `/rooms` folders.
 The import does **not** require any other libraries besides the standard ones.
- Then you can create instances of people and rooms and manage them in your program .

### Usage 
- When creating a user or room, you must specify a **name**. (In some cases, there is unneccessary additional information, such as the director's favorite joke or whether the admin has awards.)
	```C++
	User director1 = Director("Monica", "Garza", "Favorite Joke, haha!");
	```
	```C++
	Room bestRoom = Cabinet("404");
	```


- Admins have a key role because they are the only ones who can change **access** to rooms.
    Let's make Oleg the administrator. Let's see him give the student Alexey a red level:
    ```C++
    AdminOleg.setAccessLevel(Alexey, LEVEL_RED);
    ```
        
  or Oleg could only give access only to the director's room, so the student can't go into other red-level rooms:
  ```C++
  AdminOleg.setSpecificRoomAccess(Alexey, directorRoom1);
    ```
        
- The `User` and `Room` classes have **get** methods to extract information.
	```C++
	string a = director1.getFirstname();
	string b = director1.getLashName();
	string c = director1.getStringUserType(); //"director"
	string d = room1.getRoomName();
	room1.changeName("108 (not bar)")
	```
- The most important method is **enterRoom**(Room room) in the User class. It returns true or false if the person has access to the given room:
	```C++
	student122.enterRoom(directorCabinet402); //false
	director.enterRoom(lectureRoom108); //true
	```
	If you have a lot of students or staff, you can take the **massEnter** function from `main.cpp` to mass-check access.
	
*Enjoy using the program!*
