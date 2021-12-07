#include <iostream>
using namespace std;

class AAA
{
public:
	AAA()
	{
		cout << "empty object" << endl;
	}
	void ShowYourname()
	{
		cout << "I'm class AAA" << endl;
	}
};

class BBB
{
private:
	AAA& ref;
	const int& num;

public:
	BBB(AAA& r, const int& n)
		:ref(r), num(n)
	{

	}
	void ShowYourname()
	{
		ref.ShowYourname();
		cout << "and" << endl;
		cout << "I ref num" << num << endl;
	}
};

int main()
{
	AAA obj1;
	BBB obj2(obj1, 20);
	obj2.ShowYourname();
	return 0;
}