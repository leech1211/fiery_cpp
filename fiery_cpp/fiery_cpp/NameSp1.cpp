#include <iostream>

namespace BestComImpl
{
	void SimpleFunc()
	{
		std::cout << "Bestcom�� ������ �Լ�" << std::endl;
	}
}

namespace ProComImpl
{
	void SimpleFunc()
	{
		std::cout << "ProComImpl�� ������ �Լ�" << std::endl;
	}
}

int main()
{
	BestComImpl::SimpleFunc();
	ProComImpl::SimpleFunc();
	return 0;
}