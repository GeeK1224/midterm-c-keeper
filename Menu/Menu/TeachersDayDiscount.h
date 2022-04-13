#pragma once
#include "SpecialDiscount.h"
class TeachersDayDiscount : public SpecialDiscount
{
public:
	void discount(int total) override;
	float get_percent() {
		return percent;
	}
private:
	float discount_percent{ 0.15 };
	float percent{ 0 };
};

