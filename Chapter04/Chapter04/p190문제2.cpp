#include <iostream>
#include <cstdlib>
using namespace std;

namespace COMP_POS
{
	enum
	{
		CLERK, SENIOR, ASSIST, MANAGER
	};
}

class NameCard
{
private:
	char* name;
	char* company;
	char* call;
	int COMP_POS;

public:
	NameCard(char* namep, char* companyp,char* callp, int COMP_POSp)	//생성자
	{
		name = strcpy(namep, name);
		company = strcpy(companyp, company);
		call = strcpy(callp, call);
		COMP_POS = COMP_POSp;
	}

	void ShowNameCardInfo() const
	{
		cout << "이름: " << name << endl;
		cout << "회사: " << company << endl;
		cout << "전화번호: " << call << endl;
		cout << "직급: " << COMP_POS << endl;

	}
	~NameCard()		//소멸자
	{

	}

};



int main()
{
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard manSENIOR("Hong", "OrangrEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);

	manClerk.ShowNameCardInfo();
	manSENIOR.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();
	return 0;
}


//이거 나중에 다시 보기로