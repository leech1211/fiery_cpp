#include <iostream>
using std::cout;
using std::endl;
using std::cin;


void plus1(int& num)
{
	num++;
	cout << num << endl;
}

void rev1(int& num)
{
	num = num * -1;
	cout << num << endl;
}



int main()
{
	int num;
	cin >> num;
	plus1(num);
	rev1(num);

}