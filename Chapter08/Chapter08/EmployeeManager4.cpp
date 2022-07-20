#define _CRT_SECURE_NO_WARNINGS //scanf��������
#include <iostream>
#include <cstring>
using namespace std;

class Employee
{
private:
	char name[100];
public:
	Employee(char* n)
	{
		strcpy(name, n);
	}
	void ShowYourName() const {
		cout << "name: " << this->name << endl;
	}
	virtual int GetPay() const
	{
		return 0;
	}
	virtual void ShowSalaryInfo() const
	{ }
};

class PermanentWorker : public Employee
{
private:
	int salary; //����
public:
	PermanentWorker(char* n, int m)
		:Employee(n), salary(m)
	{ }

	int GetPay() const
	{
		return salary;
	}
	void ShowSalaryInfo() const {
		ShowYourName();
		cout << "Salary:" << salary << endl;
	}
};

class EmployeeHandler
{
private:
	Employee* emplist[50];
	int empNum;
public:
	EmployeeHandler() : empNum(0)
	{ }
	void AddEmployee(Employee* emp)
	{
		emplist[empNum++] = emp;
	}
	void ShowAllSalary() const
	{
		
		for(int i=0;i<empNum;i++)
			emplist[i]->ShowSalaryInfo();
		
	}
	void ShowTotalSalary() const
	{
		int sum = 0;
		
		for(int i=0;i<empNum;i++)
			sum += emplist[i]->GetPay();
		
		cout << "salary sum: " << sum << endl;
	}
	~EmployeeHandler()
	{
		for (int i = 0; i < empNum; i++)
		{
			delete emplist[i];
		}
	}
};

int main()
{
	//���������� �������� ����� ��Ʈ�� Ŭ������ ��ü����
	EmployeeHandler handler;

	//�������
	handler.AddEmployee(new PermanentWorker((char*)"KIM", 1000));
	handler.AddEmployee(new PermanentWorker((char*)"LEE", 1500));
	handler.AddEmployee(new PermanentWorker((char*)"JUM", 2000));

	//�̹��޿� �����ؾ��� �ݾ��� ����
	handler.ShowAllSalary();

	//�̹��޿� �����ؾ��� �ݾ��� ����
	handler.ShowTotalSalary();
	return 0;
}
