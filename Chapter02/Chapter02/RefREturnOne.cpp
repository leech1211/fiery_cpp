#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int& RefReturnFucOne(int& ref)
{
	ref++;
	return ref;
}

int main()
{
	int num1 = 1;
	int& num2 = RefReturnFucOne(num1);
	cout <<"num1 : "<< num1 << endl;
	cout <<"num2 : "<< num2 << endl;

	return 0;
}