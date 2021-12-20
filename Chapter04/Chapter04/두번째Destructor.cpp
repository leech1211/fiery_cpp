#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person(char* myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		age = myage;
	}

	void ShowPersonInfo()
	{
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
	
	~Person()		//소멸자
	{
		delete[] name;
		cout << "called destructor!" << endl;
	}
};

int main()
{
	Person man1((char *)"lee", 29);
	Person man2((char *)"jang", 41);
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();

	return 0;
}