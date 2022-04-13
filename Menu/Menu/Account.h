//
// Created by Elbek on 3/25/2022.
//

#ifndef ACCOUNT_ACCOUNT_H
#define ACCOUNT_ACCOUNT_H
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include "Menu.h"
#include "Table.h"
using namespace std;

class Account : public Menu, public Table
{
public: //_______________________________public data
    Account(); //prototype of class

    vector<string> get_logins();
    vector<string> get_names();
    vector<int> get_passwords();
    int get_index();
    void set_index(int);

private://_______________________________ private data
    vector<string> logins = { "21SE014", "21SE063", "21SE010", "21SE016" };
    vector<string> names = { "Kamilla", "Elbek", "Asadbek", "Timur" };
    vector<int> passwords = { 21014, 21063, 21010, 21016 };
    int index{ 0 };

};

#endif

