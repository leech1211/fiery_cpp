#define _CRT_SECURE_NO_WARNINGS //scanf��������
#include <iostream>
#include <cstring>
using namespace std;

class Computer
{
private:
	char owner[50];
public:
	Computer(char* name)
	{
		strcpy(owner, name);
	}
	void Calculate()
	{
		cout << "��û������ ����մϴ�" << endl;
	}
};

class NoteBookComp : public Computer
{
private:
	int Battery;
public:
	NoteBookComp(char* name, int initChag)
		:Computer(name), Battery(initChag)
	{

	}

	void Charging() { Battery += 5; }
	void UseBattery() { Battery -= 1; }
	void MovingCal()
	{
		if (GetBatteryInfo() < 1)
		{
			cout << "������ �ʿ��մϴ�" << endl;
			return;
		}
		cout << "�̵��ϸ鼭 ";
		Calculate();
		UseBattery();
	}
	int GetBatteryInfo()
	{
		return Battery;
	}
};

class TableNotebook : public NoteBookComp
{
private:
	char regstPenModel[50];
public:
	TableNotebook(char* name, int initChag, char* pen)
		:NoteBookComp(name, initChag)
	{
		strcpy(regstPenModel, pen);
	}
	void Write(char* penInfo)
	{
		if (GetBatteryInfo() < 1)
		{
			cout << "������ �ʿ��մϴ�" << endl;
			return;
		}
		if (strcmp(regstPenModel, penInfo) != 0)
		{
			cout << "��ϵ� ���� �ƴմϴ�.";
			return;
		}
		cout << "�ʱ⳻���� ó���մϴ�" << endl;
		UseBattery();
	}
};

int main()
{
	NoteBookComp nc((char*)"�̼���", 5);
	TableNotebook tn((char*)"������", 5, (char*)"ISE-241-242");
	nc.MovingCal();
	tn.Write((char*)"ISE-241-242");
	return 0;
}