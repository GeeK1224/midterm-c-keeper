#include "Account.h"
using namespace std;
Account::Account() {} //constructor initialization

// ___________________________________GETTERS AND SETTERS_____________________________________

vector<string> Account::get_names()
{
    return names;
}

int Account::get_index()
{
    return index;
}

vector<string> Account::get_logins()
{
    return logins;
}

vector<int> Account::get_passwords()
{
    return passwords;
}
void Account::set_index(int index)
{
    this->index = index;
}