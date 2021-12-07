#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x, int y)
		:xpos(x), ypos(y)
	{
		
	}
	void ShowPointInfo() const
	{
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
	~Point()
	{

	}
};

class Circle
{
private:
	int radius;
	Point center;

public:
	Circle(int x, int y, int r) :center(x,y)
	{
		radius = r;
		
	}
	void ShowCircleInfo() const
	{
		cout << "radius: " << radius << endl;
		center.ShowPointInfo();
	}
};

class Ring
{
private:
	Circle incircle;
	Circle outcircle;

public:
	Ring(int fx, int fy, int fr, int sx, int sy, int sr) :incircle(fx, fy, fr), outcircle(sx, sy, sr)
	{
		
	}
	void ShowRingInfo() const
	{
		cout << "Inner Circle Info.." << endl;
		incircle.ShowCircleInfo();
		cout << "Outter Circle Info.." << endl;
		outcircle.ShowCircleInfo();
	}
};




int main()
{
	Ring ring(1, 1, 4, 2, 2, 9);
	
	ring.ShowRingInfo();
	return 0;
}