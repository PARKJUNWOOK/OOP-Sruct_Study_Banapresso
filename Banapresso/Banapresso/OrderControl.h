#pragma once
#include <iostream>
#include <list>
#include <string>

#include "OrderInfo.h"

using namespace std;

class OrderControl
{
private:
	list <OrderInfo> waitingList;
	list <OrderInfo> pickUpList;
public:
	OrderControl();
	~OrderControl();
	void orderRegister(list <OrderInfo> orderReq);
	void orderDelete();
	void myOrderSearch(list <OrderInfo> orderd);
	void mydetailedOrder(list <OrderInfo> ordered);
};

