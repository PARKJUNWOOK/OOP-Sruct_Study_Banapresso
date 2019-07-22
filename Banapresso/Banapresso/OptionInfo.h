#pragma once
#include <iostream>
#include <list>
#include <string>

using namespace std;


class OptionInfo
{
private:
	int optionCode;
	string optionCodeName;
	int secondOptionCode;
	string secondOptionCodeName;
	string optionName;

	string registeredDate;
	string modifiedDate;

public:
	OptionInfo();
	~OptionInfo();
};

