#pragma once
#include <iostream>
#include <list>
#include <string>

#include "UserInfo.h"

using namespace std;


class Info_Manage
{
private:
	UserInfo My;
public:
	Info_Manage();
	~Info_Manage();
	void nameChange();
	void phNumchange();
	void cardAdd();
	void cardDel();
	void cardResave();
	void shoppinglist();
	void End();
};

