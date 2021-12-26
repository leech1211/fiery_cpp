#define _CRT_SECURE_NO_WARNINGS //scanf오류방지
#include <iostream>
#include <cstring>
using namespace std;

namespace COMP_POS
{
	enum
	{
		CLERK, SENIOR, ASSIST, MANAGER
	};

	void ShowPositionInfo(int pos)
	{
		switch (pos)
		{
		case CLERK:
			cout << "사원" << endl;
			break;
		case SENIOR:
			cout << "주임" << endl;
			break;
		case ASSIST:
			cout << "대리" << endl;
			break;
		case MANAGER:
			cout << "과장" << endl;
			break;
		}
	}
	
}

class NameCard
{
private:
	char* name;
	char* company;
	char* call;
	int position;

public:
	NameCard(char* namep, char* companyp, char* callp, int position)	//생성자
		:position(position)
	{
		this->name = new char[strlen(namep) + 1];
		this->company = new char[strlen(companyp) + 1];
		this->call = new char[strlen(callp) + 1];

		strcpy(this->name, namep);
		strcpy(this->company, companyp);
		strcpy(this->call, callp);
	}

	NameCard(const NameCard& copy)	//복사생성자
		:position(copy.position)
	{
		name = new char[strlen(copy.name) + 1];
		company = new char[strlen(copy.company) + 1];
		call = new char[strlen(copy.call) + 1];

		strcpy(name, copy.name);
		strcpy(company, copy.company);
		strcpy(call, copy.call);
	}

	void ShowNameCardInfo() const
	{
		cout << "이름: " << name << endl;
		cout << "회사: " << company << endl;
		cout << "전화번호: " << call << endl;
		cout << "직급: ";
		COMP_POS::ShowPositionInfo(position);
		cout << endl;

	}
	~NameCard()		//소멸자
	{
		delete[] name;
		delete[] company;
		delete[] call;
	}

};



int main()
{
	NameCard manClerk((char*)"Lee", (char*)"ABCEng", (char*)"010-1111-2222", COMP_POS::CLERK);
	NameCard man = manClerk;
	

	manClerk.ShowNameCardInfo();
	man.ShowNameCardInfo();
	return 0;
}


