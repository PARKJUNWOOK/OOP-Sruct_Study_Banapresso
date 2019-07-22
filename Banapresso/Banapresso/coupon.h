#pragma once
#include <iostream>
#include <string>

using namespace std;

class Coupon
{
private:
	string createDate;
	string useDate;
	bool checkUseMode;

public:
	Coupon();
	~Coupon();
	void UseCoupon();
	void delCoupon();
	void changeUseMode();
};

