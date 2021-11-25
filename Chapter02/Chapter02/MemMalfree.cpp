#include <iostream>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable : 4996)  //strcpy 경고 무시



char* MakeStrAdr(int len)
{
	char* str = (char*)malloc(sizeof(char) * len);
	return str;
}


int main()
{
	char* str = MakeStrAdr(20);
	strcpy(str, "I feel burnout");
	std::cout << str << std::endl;
	free(str);
	
	return 0;
}