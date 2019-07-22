#pragma once
#include <iostream>
#include <list>
#include <string>

using namespace std;

#include "OptionInfo.h"
#include "MenuInfo.h"

class MenuMng
{
private:
	list <OptionInfo> option;
	list <MenuInfo> menu;

public:
	MenuMng();
	~MenuMng();
	void registerMenu(class MenuInfo new_menu);
	void modifyMenu(class MenuInfo mod_menu);
	void deleteMenu(int menuCode, int secondMenuCode);
	void getMenuList();

	void getSimpleOptionList();
	void getOptionList();
	void registerOption(class OptionInfo new_option);
	void modifyOption(class OptionInfo mod_option);
	void deleteOption(int optionCode, int secondOptionCode);
};

