#include "TeachersDayDiscount.h"

void TeachersDayDiscount::discount(int total)
{
	percent = total * discount_percent;
	cout << "Happy Teachers' Day, your discount is -" << discount_percent*100 << "%" << endl;
	total = total - percent;
}