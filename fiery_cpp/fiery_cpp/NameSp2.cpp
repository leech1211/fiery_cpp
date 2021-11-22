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
	std::cout << "Bestcom이 정의한 함수" << std::endl;
}

void ProComImpl::SimpleFunc()
{
	std::cout << "ProComImpl이 정의한 함수" << std::endl;
}