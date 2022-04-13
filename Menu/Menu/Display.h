#pragma once
#include "Cashier.h"

class Display : public Cashier
{
public:
	void login();
	void welcome(int);
	void checking_account(string, int);
	void takeOrder();
	void declineOrder();
};

