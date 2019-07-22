#pragma once
#include <iostream>
#include <string>

using namespace std;

class Point
{
private:
	int memberPoint;
	string createDate;
	string useDate;

public:
	Point();
	~Point();
	void delPoint();
	void addPoint();
	void updatePoint();
};

