#include "WomensDayDiscount.h"

void WomensDayDiscount::discount(int total)
{
	percent = total * discount_percent;
	cout << "Happy Women's Day, your discount is -" << discount_percent * 100 << "%" << endl;
}