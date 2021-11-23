#include <iostream>
using std::cout;
using std::cin;
using std::endl;

bool IsPositive(int num)
{
	if (num <= 0)
	{
		return false;
	}
	else
		return true;
}


int main()
{
	bool ispos;
	int num;

	cout << "Input number: ";
	cin >> num;

	ispos = IsPositive(num);
	if (ispos)
		cout << "Postive number" << endl;
	else
		cout << "Negative number" << endl;
}
