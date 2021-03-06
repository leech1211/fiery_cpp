#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num1;
	int num2;
public:
	SoSimple(int n1, int n2)
		:num1(n1), num2(n2)
	{

	}

	SoSimple(SoSimple& copy)		//복사생성자
		:num1(copy.num1), num2(copy.num2)
	{
		cout << "Called SoSimple(SoSimple &copy)" << endl;
	}

	void ShowSoSimpleData()
	{
		cout << num1 << endl;
		cout << num2 << endl;
	}
};

int main()
{
	SoSimple sim1(15, 30);
	cout << "생성 및 초기화 직전" << endl;
	SoSimple sim2 = sim1;		//SoSimple sim2(sim1); 으로변환
	cout << "생성 및 초기화 직후" << endl;
	//sim1.ShowSoSimpleData();
	sim2.ShowSoSimpleData();
	return 0;
}