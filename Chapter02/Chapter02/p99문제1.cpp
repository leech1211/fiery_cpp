#include <iostream>
#include <cstring>
#pragma warning(disable : 4996)  //strcpy 경고 무시
using namespace std;

int main()
{
	char str1[] = "ABC 123";
	char str2[] = "DEF 456";
	char str3[30];

	int str1leng = strlen(str1);
	int str2leng = strlen(str2);
	strcat(str2, str1);
	strcpy(str3, str2);

	cout << "str1 " << str1<< endl;
	cout << "str2 " << str2<< endl;
	cout << "str3 " << str3<< endl;

	if (strcmp(str2, str3) == 0)
	{
		cout << "str2와 str3는 같다" << endl;
	}
	else
	{
		cout << "str2와 str3는 같지않다" << endl;
	}

}