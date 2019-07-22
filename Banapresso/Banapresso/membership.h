#pragma once
#include <iostream>
#include <string>
#include <list>

#include "Point.h"
#include "Coupon.h"
#include "Stamp.h"

using namespace std;

class Membership
{
private:
	Point memberPoint;
	list <Coupon> couponList;
	list <Stamp> stampList;

public:
	Membership();
	~Membership();
	void stampToCoupon(); // 12개 모으면 쿠폰으로 변환
	void delStamp(); // 사용기간 지나면 삭제
};

