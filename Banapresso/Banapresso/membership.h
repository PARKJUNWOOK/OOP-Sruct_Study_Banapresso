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
	void stampToCoupon(); // 12�� ������ �������� ��ȯ
	void delStamp(); // ���Ⱓ ������ ����
};

