#include <iostream>

int main()
{
	char name[100];
	char num[100];

	std::cout << "이름을 입력: ";
	std::cin >> name;

	std::cout << "번호를 입력: ";
	std::cin >> num;

	std::cout << name << std::endl;
	std::cout << num << std::endl;

}