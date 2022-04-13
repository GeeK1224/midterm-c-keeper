#include "Display.h"

void Display::login()
{
    system("cls");
    string input_login;
    int input_password{ 0 };
    cout << "Please log in" << endl
        << "login: ";
    cin >> input_login;
    cout << "password: ";
    cin >> input_password;
    checking_account(input_login, input_password);
}
// ____________________________________________________________________
void Display::welcome(int index)
{
    system("cls");
    cout << "Welcome " << get_names()[index] << " Admin" << endl
        << "1. Choose the table" << endl
        << "2. Take an Order" << endl
        << "3. Decline an order" << endl
		<< "4. Issue Check" << endl
        << "x. Log out" << endl;
    char key;
    cin >> key;
    switch (key) {
    case '1': {
        menu_table_type();
        for_table_no();
        welcome(index);
        break;
    }
    case '2': {
        takeOrder();
        break;
    }
    case '3': {
        declineOrder();
        break;
    }
	case '4': {
		bill(get_index());
		break;
	}
    case 'x': {
		login();
        break;
    }
    }
}

void Display::checking_account(string input_login, int input_password) {
    system("cls");
    int index{ 0 };
    for (int i = 0; i < get_logins().size(); i++) {
        if (get_logins()[i] == input_login) {
            if (get_passwords()[i] == input_password) {
                index = i;
				set_index(index);
				welcome(get_index());
            }
            else {
                cout << "You are impostor (1. to try again)" << endl;
                char key;
                cin >> key;
                switch (key) {
                case '1': {
                    Account();
                    break;
                }
                }
            }
        }
    }
}

vector<string> ordered;
vector<float> price_ordered;
vector<int> quantity;

void Display::takeOrder() {
	system("cls");
	// _____________________________________________________________________________________________
	cout << setw(10) << "Menu" << endl
		<< "1. Burger" << endl
		<< "2. Coke" << endl
		<< "3. Coffee" << endl
		<< "4. Chicken Wings" << endl
		<< "5. Nuggets" << endl
		<< "6. French Fries" << endl
		<< "7. Ice Cream" << endl
		<< "8. Pizza" << endl
		<< "9. Shawarma" << endl
		<< "0. <---" << endl;
	// ________________________________________________________________________________________________
	int key{ 0 };
	cin >> key;
	switch (key) {
		// ________________________________________________________________________________________________
	case 1: {
		int quant{ 0 };
		cout << "Quantity: ";
		cin >> quant;
		ordered.push_back(DISHES[key - 1]);
		price_ordered.push_back(D_PRICES[key - 1]);
		quantity.push_back(quant);
		takeOrder();
		break;
	}
		  // ________________________________________________________________________________________________
	case 2: {
		int quant{ 0 };
		cout << "Quantity: ";
		cin >> quant;
		ordered.push_back(DISHES[key - 1]);
		price_ordered.push_back(D_PRICES[key - 1]);
		quantity.push_back(quant);
		takeOrder();
		break;
	}
		  // ________________________________________________________________________________________________
	case 3: {
		int quant{ 0 };
		cout << "Quantity: ";
		cin >> quant;
		ordered.push_back(DISHES[key - 1]);
		price_ordered.push_back(D_PRICES[key - 1]);
		quantity.push_back(quant);
		takeOrder();
		break;
	}
		  // ________________________________________________________________________________________________
	case 4: {
		int quant{ 0 };
		cout << "Quantity: ";
		cin >> quant;
		ordered.push_back(DISHES[key - 1]);
		price_ordered.push_back(D_PRICES[key - 1]);
		quantity.push_back(quant);
		takeOrder();
		break;
	}
		  // ________________________________________________________________________________________________
	case 5: {
		int quant{ 0 };
		cout << "Quantity: ";
		cin >> quant;
		ordered.push_back(DISHES[key - 1]);
		price_ordered.push_back(D_PRICES[key - 1]);
		quantity.push_back(quant);
		takeOrder();
		break;
	}
		  // ________________________________________________________________________________________________
	case 6: {
		int quant{ 0 };
		cout << "Quantity: ";
		cin >> quant;
		ordered.push_back(DISHES[key - 1]);
		price_ordered.push_back(D_PRICES[key - 1]);
		quantity.push_back(quant);
		takeOrder();
		break;
	}
		  // ________________________________________________________________________________________________
	case 7: {
		int quant{ 0 };
		cout << "Quantity: ";
		cin >> quant;
		ordered.push_back(DISHES[key - 1]);
		price_ordered.push_back(D_PRICES[key - 1]);
		quantity.push_back(quant);
		takeOrder();
		break;
	}
		  // ________________________________________________________________________________________________
	case 8: {
		int quant{ 0 };
		cout << "Quantity: ";
		cin >> quant;
		ordered.push_back(DISHES[key - 1]);
		price_ordered.push_back(D_PRICES[key - 1]);
		quantity.push_back(quant);
		takeOrder();
		break;
	}
		  // ________________________________________________________________________________________________
	case 9: {
		int quant{ 0 };
		cout << "Quantity: ";
		cin >> quant;
		ordered.push_back(DISHES[key - 1]);
		price_ordered.push_back(D_PRICES[key - 1]);
		quantity.push_back(quant);
		takeOrder();
		break;
	}
		  // ________________________________________________________________________________________________
	case 0: {
		welcome(get_index());
	}
	}
}
void Display::declineOrder() {
	ordered.clear();
	price_ordered.clear();
	quantity.clear();
}