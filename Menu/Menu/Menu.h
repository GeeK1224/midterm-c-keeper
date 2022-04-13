#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

class Menu
{
public:

	Menu();
	vector<string> getOrdered();
	vector<float>getPriceOrdered();
	vector<int>getQuantity();
protected:
	vector<string> DISHES =
	{
		"Burger", "Coke", "Coffee", "Chicken Wings", "Nuggets", "French Fries", "Ice Cream", "Pizza", "Shawarma"
	};
	vector<float> D_PRICES =
	{
		12.0, 5.0, 13.0, 15.0, 12.0, 10.0, 7.0, 22.0, 18.0
	};
};

