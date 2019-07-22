#pragma once
#include <iostream>
#include <list>
#include <string>

using namespace std;

class MenuInfo
{
private:
	int menuCode;
	string menuCodeName;
	int secondMenuCode;
	string secondMenuCodeName;
	int manuPrice;
	enum menuCategory { drink, none_drink };
	string registeredDate;
	string modifiedDate;
	enum soldeout { YES, NO };

public:
	MenuInfo();
	~MenuInfo();
};

