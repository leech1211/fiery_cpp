#include <iostream>

namespace BestComImpl
{
	void SimpleFunc();
}

namespace ProComImpl
{
	void SimpleFunc();
}

int main()
{
	BestComImpl::SimpleFunc();
	ProComImpl::SimpleFunc();
	return 0;
}


void BestComImpl::SimpleFunc()
{
	std::cout << "Bestcom�� ������ �Լ�" << std::endl;
}

void ProComImpl::SimpleFunc()
{
	std::cout << "ProComImpl�� ������ �Լ�" << std::endl;
}