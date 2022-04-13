#include "Table.h"
 
void Table::for_table_no() {
    system("cls");
    cout << "Insert a table number: " << endl;
    cin >> table_no;
    set_table_no(table_no);

}
void Table::menu_table_type() {
    system("cls");
    cout << "Please, choose a table type" << endl
        << "1. No smoking area" << endl
        << "2. Smoking area" << endl;
    char key;
    cin >> key;
    switch (key) {
    case '1': {
        set_table_type("no smoking area");
        break;
    }
    case '2': {
        set_table_type("smoking area");
        break;
    }
    }
}
// ___________________________________________________ SETTERS AND GETTERS ___________________________________________________
void Table::set_table_type(string table_type) {
    this->table_type = table_type;
}

void Table::set_table_no(int table_no) {
    this->table_no = table_no;
}

string Table::get_table_type()
{
    return table_type;
}
int Table::get_table_no()
{
    return table_no;
}
