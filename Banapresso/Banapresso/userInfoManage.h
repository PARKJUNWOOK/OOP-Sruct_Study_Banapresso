#pragma once
#include <string>
#include <list>

#include "UserInfo.h"

using namespace std;

class UserInfoManage
{
private:
	list<UserInfo> userList;
	int index;

public:
	UserInfoManage();
	~UserInfoManage();
	void insertUser();
	void delUser();
	void setIndex(int i);
	int getIndex();
	void setInfo(int phoneNum);
	void setInfo(string userName);
	void setInfo(string userName, int phoneNum);
	UserInfo getUser();
	int getSize();
};

