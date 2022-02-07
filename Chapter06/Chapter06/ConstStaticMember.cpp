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
	cout << "러시아의 면적: " << CountryArea::RUSSIA << "km" << endl;
	cout << "캐나다의 면적: " << CountryArea::CANADA << "km" << endl;
	cout << "중국의 면적: " << CountryArea::CHIAN << "km" << endl;
	cout << "한국의 면적: " << CountryArea::KOREA << "km" << endl;
	return 0;
}