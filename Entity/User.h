//
// Created by nazar on 03.05.17.
//

#ifndef TEAM_04_USER_H
#define TEAM_04_USER_H

#pragma once
#include <vector>
#include <iostream>
#include <fstream>
#include <string>
#include "Base.h"

using namespace std;

class User : public Base {

private:

    string username;

    string login;

    string password;

public:
    User();

    User(string username, string login, string password);

    User(const User& obj);

    string get_username();

    void set_username(string username);

    string return_login();

    void set_login(string surname);

    string return_password();

    void set_password(string groupname);
};



#endif //TEAM_04_USER_H