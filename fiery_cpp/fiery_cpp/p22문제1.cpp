#include <iostream>

int main()
{
	int num1;
	int sum = 0;
	std::cout << "1번째 정수 입력: ";
	std::cin >> num1;
	sum += num1;

	int num2;
	std::cout << "2번째 정수 입력: ";
	std::cin >> num2;
	sum += num2;

	int num3;
	std::cout << "3번째 정수 입력: ";
	std::cin >> num3;
	sum += num3;

	int num4;
	std::cout << "4번째 정수 입력: ";
	std::cin >> num4;
	sum += num4;

	int num5;
	std::cout << "5번째 정수 입력: ";
	std::cin >> num5;
	sum += num5;

	std::cout << "합계:" << sum << std::endl;

	return 0;
}