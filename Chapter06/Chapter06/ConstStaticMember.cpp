#include <iostream>
using namespace std;

class CountryArea
{
public:
	const static int RUSSIA = 1707540;
	const static int CANADA = 998467;
	const static int CHIAN = 957290;
	const static int KOREA = 9922;
};

int main()
{
	cout << "���þ��� ����: " << CountryArea::RUSSIA << "km" << endl;
	cout << "ĳ������ ����: " << CountryArea::CANADA << "km" << endl;
	cout << "�߱��� ����: " << CountryArea::CHIAN << "km" << endl;
	cout << "�ѱ��� ����: " << CountryArea::KOREA << "km" << endl;
	return 0;
}