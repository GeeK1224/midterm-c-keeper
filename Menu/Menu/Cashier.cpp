#include "Cashier.h"


void Cashier::bill(int index) {
	system("cls");
	cout << setw(25) << "TEKA-Pub" << endl
		<< "Cashier: " << get_names()[index] << endl
		<< "Waiter: " << get_names()[index] << endl
		<< "\nTable type: " << get_table_type() << endl
		<< "Table no. : " << get_table_no() << endl
		<< "\n\nDish" << setw(12) << "Quantity" << setw(5) << "Sum" << endl
		<< "---------------------------------------------------" << endl;
	float total{ 0 };
	for (int i = 0; i < getOrdered().size(); i++) {
		cout << getOrdered()[i] << setw(5) << "x" << getQuantity()[i] << setw(5) << getPriceOrdered()[i] << endl;
		total = total + (getPriceOrdered()[i] * getQuantity()[i]);
	}
	cout << "Total berore discount: " << total << endl;
	cout << "________________________________________________" << endl
		<< "Choose your discount:" << endl
		<< "1. New Year Discount" << endl
		<< "2. Women's Day" << endl
		<< "3. Teacher's Day" << endl
		<< "4. No Discount" << endl;
	int key;
	cin >> key;
	switch (key) {
	case 1: {
		NewYearDiscount::discount(total);
		checker = 1;
		TotalDisplay(total);
		break;
	}
	case 2: {
		WomensDayDiscount::discount(total);
		checker = 2;
		TotalDisplay(total);
		break;
	}
	case 3: {
		TeachersDayDiscount::discount(total);
		checker = 3;
		TotalDisplay(total);
		break;
	}
	case 4: {
		checker = 4;
		TotalDisplay(total);
		break;
	}
	}
}
void Cashier::TotalDisplay(int total)
{
	if (checker == 4) {
		cout << "Total: " << total << endl;
	}
	else if(checker == 3) {
		total = total - TeachersDayDiscount::get_percent();
		cout << "Total: " << total << endl;
	}
	else if (checker == 2) {
		total = total - WomensDayDiscount::get_percent();
		cout << "Total: " << total << endl;
	}
	else if (checker == 1) {
		total = total - NewYearDiscount::get_percent();
		cout << "Total: " << total << endl;
	}
		cout << "---------------------------------------------------" << endl
	<< "Thank you! Waiting you again ... " << endl;
}