#include <iostream>
#include "두번째Point.h"
using namespace std;

Point::Point(const int& xpos, const int& ypos)
{
	x = xpos;
	y = ypos;
}

int Point::GetX() const { return x; }
int Point::GetY() const { return y; }

bool Point::SetX(int xpos)
{
	if (xpos > 100 || xpos < 0)
	{
		cout << "잘못된 입력" << endl;
		return false;
	}
	x = xpos;
	return true;
}

bool Point::SetY(int ypos)
{
	if (ypos > 100 || ypos < 0)
	{
		cout << "잘못된 입력" << endl;
		return false;
	}
	y = ypos;
	return true;
}
