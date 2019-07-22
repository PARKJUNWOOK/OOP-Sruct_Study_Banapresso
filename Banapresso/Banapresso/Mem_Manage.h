#pragma once
#include <iostream>
#include <list>
#include <string>

#include "Membership.h"

using namespace std;

class Mem_Manage
{
private:
	Membership my_membership;
public:
	Mem_Manage();
	~Mem_Manage();
	void stamp_look();
	void point_look();
	void coupon_look();

};

