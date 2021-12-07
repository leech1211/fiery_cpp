#include <iostream>
using namespace std;

class NameCard
{
private:
	char name;
	char company;
	char call;
	int COMP_POS
	enum 
	{
		CLERK,SENIOR,ASSIST,MANAGER
	};

public:
	NameCard(char* name, char* company,char* call, int COMP_POS)
	{

	}

	void ShowNameCardInfo() const
	{
		cout << "이름: " << name << endl;
		cout << "회사: " << company << endl;
		cout << "전화번호: " << call << endl;
		cout << "직급: " << COMP_POS << endl;

	}
	~NameCard()
	{

	}

};



int main()
{
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard manSENIOR("Hong", "OrangrEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::Assist);

	manClerk.ShowNameCardInfo();
	manSENIOR.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();
	return 0;
}