#include <iostream>
#include <string.h>
#pragma warning(disable : 4996)  //strcpy ��� ����
using std::cout;
using std::cin;
using std::endl;

char* MakeStrAdr(int len)
{
	//char* str = (char*)malloc(sizeof(char) * len);
	char* str = new char[len];
	
	return str;
}

int main()
{
	char* str = MakeStrAdr(20);
	strcpy(str, "i am sleepy");
	cout << str << endl;
	delete[]str;
	
	return 0;
}