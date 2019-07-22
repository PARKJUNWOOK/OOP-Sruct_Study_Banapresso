#pragma once
#include <iostream>
#include <string>

using namespace std;

class CardInfo
{
private:
	string cardNumber;
	string cardExpDate;
	string userBirth;

public:
	CardInfo();
	~CardInfo();
	void delCard();
	void addCard();
	void updateCard();
};

