#pragma once
#include <iostream>
#include <string>
#include "Menu.h"
using namespace std;

class Table
{
public:

    // TABLE TYPE___________________
    void set_table_type(string);
    string get_table_type();

    // TABLE NO.____________________
    void set_table_no(int);
    int get_table_no();

    // MENU TABLE TYPE______________
    void menu_table_type();

    // TABLE NO.____________________
    void for_table_no();

    //DISPLAY_______________________


private:
    string table_type;
    int table_no;
};

