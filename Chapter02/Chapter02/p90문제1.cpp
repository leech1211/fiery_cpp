#include <iostream>
using namespace std;

int main()
{
	const int num = 12;
	const int* ptr = &num;
	const int* (&ref) = ptr;

	cout << *ptr;
	cout << *ref << endl;
}