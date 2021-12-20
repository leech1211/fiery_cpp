#include <iostream>
#include "두번째Rectangle.h"

using namespace std;

Rectangle::Rectangle(const int& x1, const int& y1, const int& x2, const int& y2)
	:upleft(x1, y1), lowright(x2, y2)
{

}

void Rectangle:: ShowRecInfo() const
{
	cout << "좌상단: " << '[' << upleft.GetX() << "," << upleft.GetY() << ']' << endl;
	cout << "우하단: " << '[' << lowright.GetX() << "," << lowright.GetY() << ']' << endl;
}