#include <iostream>

int main()
{
	int sale = 0;

	while (sale != -1)
	{
		std::cout << "�Ǹűݾ��� ���������� �Է�(-1 to end): ";
		std::cin >> sale;
		if (sale == -1)
		{
			std::cout << "���α׷��� �����մϴ�" << std::endl;
			return 0;
		}

		std::cout << "�̹��� �޿�:" << 50 + sale * 0.12 << "����" << std::endl;
	}


}