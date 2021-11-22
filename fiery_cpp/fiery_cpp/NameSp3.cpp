#include <iostream>

namespace BestComImpl
{
	void SimpleFunc();
}

namespace BestComImpl
{
	void PrettyFunc();
}

namespace ProComImpl
{
	void SimpleFunc();
}

int main()
{
	BestComImpl::SimpleFunc();
	
	return 0;
}


void BestComImpl::SimpleFunc()
{
	std::cout << "Bestcom이 정의한 함수" << std::endl;
	PrettyFunc();                          //동일이름공간
	ProComImpl::SimpleFunc();			   //다른 이름공간
}

void BestComImpl::PrettyFunc()
{
	std::cout << "ProComImpl이 정의한 함수" << std::endl;
}

void ProComImpl::SimpleFunc()
{
	std::cout << "So Pretty!!" << std::endl;
}