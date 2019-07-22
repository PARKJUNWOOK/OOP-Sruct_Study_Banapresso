#pragma once
#include <iostream>
#include <list>
#include <string>

#include "userInfo.h"
#include "MenuInfo.h"
using namespace std;

class OrderInfo
{
private:
	list <MenuInfo> menuList;
	int totalCost;
	UserInfo user;
	int sale;
	int storePk;
	string makingStatus;
	string orderTime;
	string pickUpTime;
	string cancelTime;
public:
	OrderInfo();
	~OrderInfo();
	void getOrderInfo();
};

