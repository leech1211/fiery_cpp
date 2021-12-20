#include <iostream>
#include "�ι�°Point.h"
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
		cout << "�߸��� �Է�" << endl;
		return false;
	}
	x = xpos;
	return true;
}

bool Point::SetY(int ypos)
{
	if (ypos > 100 || ypos < 0)
	{
		cout << "�߸��� �Է�" << endl;
		return false;
	}
	y = ypos;
	return true;
}
