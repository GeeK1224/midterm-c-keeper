#include "NewYearDiscount.h"

void NewYearDiscount::discount(int total)
{
	percent = total * discount_percent;
	cout << "Happy New Year, your discount is -" << discount_percent * 100 << "%" << endl;
	total = total - percent;
}