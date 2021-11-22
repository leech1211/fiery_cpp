#include <iostream>

namespace BestComImpl
{
	void SimpleFunc()
	{
		std::cout << "Bestcom이 정의한 함수" << std::endl;
	}
}

namespace ProComImpl
{
	void SimpleFunc()
	{
		std::cout << "ProComImpl이 정의한 함수" << std::endl;
	}
}

int main()
{
	BestComImpl::SimpleFunc();
	ProComImpl::SimpleFunc();
	return 0;
}