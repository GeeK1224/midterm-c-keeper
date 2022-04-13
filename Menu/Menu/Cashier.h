#pragma once
#include "Account.h"
#include "NewYearDiscount.h"
#include "TeachersDayDiscount.h"
#include "WomensDayDiscount.h"

class Cashier : public Account, public NewYearDiscount, public TeachersDayDiscount, public WomensDayDiscount
{
public:
	void bill(int);
	void TotalDisplay(int);
private:
	int checker{ 0 };
};

