#include "Menu.h"

Menu::Menu() {}

extern vector<string> ordered;
extern vector<float> price_ordered;
extern vector<int> quantity;


// GET ORDERED______________________________
vector<string> Menu::getOrdered()
{
	return vector<string>(ordered);
}

// GET PRICE ORDERED________________________
vector<float> Menu::getPriceOrdered()
{
	return vector<float>(price_ordered);
}

// GET QUANTITY______________________________
vector<int> Menu::getQuantity()
{
	return vector<int>(quantity);
}