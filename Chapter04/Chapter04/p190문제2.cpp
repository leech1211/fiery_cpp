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
	NameCard(char* namep, char* companyp,char* callp, int COMP_POSp)	//������
	{
		name = strcpy(namep, name);
		company = strcpy(companyp, company);
		call = strcpy(callp, call);
		COMP_POS = COMP_POSp;
	}

	void ShowNameCardInfo() const
	{
		cout << "�̸�: " << name << endl;
		cout << "ȸ��: " << company << endl;
		cout << "��ȭ��ȣ: " << call << endl;
		cout << "����: " << COMP_POS << endl;

	}
	~NameCard()		//�Ҹ���
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


//�̰� ���߿� �ٽ� �����