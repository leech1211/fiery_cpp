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
	std::cout << "Bestcom�� ������ �Լ�" << std::endl;
	PrettyFunc();                          //�����̸�����
	ProComImpl::SimpleFunc();			   //�ٸ� �̸�����
}

void BestComImpl::PrettyFunc()
{
	std::cout << "ProComImpl�� ������ �Լ�" << std::endl;
}

void ProComImpl::SimpleFunc()
{
	std::cout << "So Pretty!!" << std::endl;
}