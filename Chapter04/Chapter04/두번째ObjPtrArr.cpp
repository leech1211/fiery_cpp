#define _CRT_SECURE_NO_WARNINGS //scanf오류방지
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
		strcpy(name, myname);
		age = myage;
	}
	Person()		//생성자
	{
		name = NULL;
		age = 0;
		cout << "called Person()" << endl;
	}
	void SetPersonInfo(char* myname, int myage)		//데이터 초기화
	{
		name = myname;
		age = myage;
	}
	void ShowPersonInfo() const
	{
		cout << "이름: " << name;
		cout << " 나이: " << age << endl;
	}
	~Person()		//소멸자
	{
		delete[] name;
		cout << "called Destructor" << endl;
	}
};

int main()
{
	Person* parr[3];
	char namestr[100];
	int age;

	for (int i = 0; i < 3; i++)
	{
		cout << "name: ";
		cin >> namestr;
		cout << "age: ";
		cin >> age;
		parr[i] = new Person(namestr, age);
	}

	parr[0]->ShowPersonInfo();
	parr[1]->ShowPersonInfo();
	parr[2]->ShowPersonInfo();

	delete parr[0];
	delete parr[1];
	delete parr[2];

	return 0;
}