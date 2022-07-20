#define _CRT_SECURE_NO_WARNINGS //scanf오류방지
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
	void ShowYourName() const{
		cout << "name: " << this->name << endl;
	}
};

class PermanentWorker : public Employee
{
private:
	int salary; //연봉
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
	
		/*
		for(int i=0;i<empNum;i++)
			empList[i]->ShowSalaryInfo();
		*/
		
	}
	void ShowTotalSalary() const
	{
		int sum = 0;
		/*
		for(int i=0;i<empNum;i++)
			sum += empList[i]->GetPay();
		*/
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

class TemporaryWorker : public Employee
{
private:
	int workTime;	//이달에 일한 시간의 합
	int payPerHour;	//시급
public:
	TemporaryWorker(char* name, int pay)
		:Employee(name),workTime(0),payPerHour(pay)
	{ }

	void AddWorkTime(int time)	//일한시간의 추가
	{
		workTime += time;
	}
	int GetPay() const
	{
		return workTime * payPerHour;
	}
	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary: " << GetPay() << endl;
	}
};

class SaleWorker : public PermanentWorker
{
private:
	int salesResult;	//월 판매실적
	double bonusRatio;	//상여금 비율

public:
	SaleWorker(char* name, int money, double ratio)
		:PermanentWorker(name,money), salesResult(0), bonusRatio(ratio)
	{ }

	void AddSaleResult(int value)	
	{
		salesResult += value;
	}

	int GetPay() const
	{
		return PermanentWorker::GetPay(); +(int)(salesResult * bonusRatio);
	}

	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl;
	}
};

int main()
{
	//직원관리를 목적으로 설계된 컨트롤 클래스의 객체생성
	EmployeeHandler handler;

	//직원등록
	handler.AddEmployee(new PermanentWorker((char*)"KIM", 1000));
	handler.AddEmployee(new PermanentWorker((char*)"LEE", 1500));

	//임시직 등록
	TemporaryWorker* alba = new TemporaryWorker((char*)"Jung", 700);
	alba->AddWorkTime(5);
	handler.AddEmployee(alba);

	//영업직 등록
	SaleWorker* seller = new SaleWorker((char*)"Hong", 1000, 0.1);
	seller->AddSaleResult(7000);
	handler.AddEmployee(seller)

	//이번달에 지불해야할 금액의 정보
	handler.ShowAllSalary();

	//이번달에 지불해야할 금액의 총합
	handler.ShowTotalSalary();
	return 0;
}
