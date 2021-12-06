#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	void Init(int x, int y)
	{
		xpos = x;
		ypos = y;
	}
	void ShowPointInfo() const
	{
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
};

class Circle
{
private:
	int radius;
	Point center;
	
public:
	void Init(int x, int y, int r)
	{
		radius = r;
		center.Init(x, y);
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
	void Init(int fx, int fy, int fr, int sx, int sy, int sr) 
	{
		incircle.Init(fx, fy, fr);
		outcircle.Init(sx, sy, sr);
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
	Ring ring;
	ring.Init(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();
	return 0;
}