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
	Person(char* myname, int myage)		//이거 주석해도 결과는 같네?
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
		cout << "이름: " << name ;
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
	Person parr[3];
	char namestr[100];
	char* strptr;
	int age;
	int len;

	for (int i = 0; i < 3; i++)
	{
		cout << "name: ";
		cin >> namestr;
		cout << "age: ";
		cin >> age;
		len = strlen(namestr) + 1;
		strptr = new char[len];
		strcpy(strptr, namestr);
		parr[i].SetPersonInfo(strptr, age);

	}

	parr[0].ShowPersonInfo();
	parr[1].ShowPersonInfo();
	parr[2].ShowPersonInfo();

	return 0;
}