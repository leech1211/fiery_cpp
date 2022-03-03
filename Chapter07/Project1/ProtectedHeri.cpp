#include <iostream>
using namespace std;

class Base
{
private:
	int num1;
protected:
	int num2;
public:
	int num3;

	Base() : num1(1), num2(2), num3(3)
	{

	}

};

class Derived : protected Base	//empty
{

};

int main()
{
	Derived drv;
	cout << drv.num3 << endl;		//컴파일 에러 발생
	return 0;	
}
//Base클래스를 protected로 상속했기때문에 public 멤버변수인 num3는 Derived에서 protected가 된다 
//마찬가지로 private로 상속 받으면 private보다 접근범위가 넓은 멤버는 private로 바뀐다