#pragma once

#include <iostream>
#include <list>
#include <string>

#include "CardInfo.h"
#include "Membership.h"

using namespace std;

class UserInfo
{
private:
	string phNum;
	string name;
	list <CardInfo> cardList;
	Membership userMembership;
	bool exit;

public:
	UserInfo();
	~UserInfo();
};

