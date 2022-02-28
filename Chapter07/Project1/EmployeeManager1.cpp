#define _CRT_SECURE_NO_WARNINGS //scanf오류방지
#include <iostream>
using namespace std;

class PermanentWorker
{
private:
	char name[100];
	int salary;	//매달 지불해야하는 급여액
public:
	PermanentWorker(char* name, int money)
		:salary(money)
	{
		strcpy(this->name, name);
	}
	int GetPay() const
	{
		return salary;
	}
	void showSalaryInfo() const
	{
		cout << "name: " << name << endl;
		cout << "salary: " << GetPay() << endl << endl;
	}
};

class EmployeeHandler
{
private:
	PermanentWorker* empList[50];
	int empNum;
public:
	EmployeeHandler() : empNum(0)
	{

	}
	void AddEmployee(PermanentWorker* emp)
	{
		empList[empNum++] = emp;
	}
	void ShowAllSalaryInfo() const
	{
		for (int i = 0; i < empNum; i++)
		{
			empList[i]->showSalaryInfo();
		}
	}
	void ShowTotalSalary() const
	{
		int sum = 0;
		for (int i = 0; i < empNum; i++)
		{
			sum += empList[i]->GetPay();
		}
		cout << "salary sum: " << sum << endl;
	}
	~EmployeeHandler()
	{
		for (int i = 0; i < empNum; i++)
		{
			delete empList[i];
		}
	}
};

int main()
{
	//직원관리를 목적으로 설계된 컨트롤 클래스의 객체생성
	EmployeeHandler handler;

	//직원 등록
	handler.AddEmployee(new PermanentWorker((char*)"KIM", 1000));
	handler.AddEmployee(new PermanentWorker((char*)"LEE", 1500));
	handler.AddEmployee(new PermanentWorker((char*)"JUN", 2000));

	//이번달 지불해야할 금액정보
	handler.ShowAllSalaryInfo();

	//이번달 지불해야할 금액
	handler.ShowTotalSalary();
	return 0;

}

