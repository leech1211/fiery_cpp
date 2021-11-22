#include <iostream>

int main()
{
	int sale = 0;

	while (sale != -1)
	{
		std::cout << "판매금액을 만원단위로 입력(-1 to end): ";
		std::cin >> sale;
		if (sale == -1)
		{
			std::cout << "프로그램을 종료합니다" << std::endl;
			return 0;
		}

		std::cout << "이번달 급여:" << 50 + sale * 0.12 << "만원" << std::endl;
	}


}