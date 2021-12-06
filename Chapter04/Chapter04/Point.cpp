#include <iostream>
#include "Point.h"
using namespace std;

Point::Point(const int &xpos, const int &ypos)
{
	if (xpos < 0 || ypos < 0)
	{
		cout << "��� ������ �� ����" << endl;
		
	}

	x = xpos;
	y = ypos;
	
}

int Point::GetX() const		//const �Լ�
{
	return x;
}

int Point::GetY() const		//const �Լ�
{
	return y;
}

bool Point::SetX(int xpos)
{
	if (0 > xpos || xpos > 100)
	{
		cout << "��� ������ �� ����" << endl;
		return false;
	}
	x = xpos;
	return true;
}

bool Point::SetY(int ypos)
{
	if (0 > ypos || ypos > 100)
	{
		cout << "��� ������ �� ����" << endl;
		return false;
	}
	y = ypos;
	return true;
}