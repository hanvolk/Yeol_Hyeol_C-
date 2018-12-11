#include <iostream>
#include <cstring>
using std::cin;
using std::cout;
using std::endl;

namespace RISK_LEVEL
{
    enum {RISK_A=30, RISK_B=20, RISK_C=10};
}

class Employee
{
private:
    char name[50];
public:
    Employee(char* name)
    {
        strcpy(this->name,name);
    }
    void ShowYourName() const
    {
        cout<<"Name : "<<name<<endl;
    }

    virtual int GetPay() const=0;

    virtual void ShowSalaryInfo() const=0;

};

class PermanentWorker:public Employee
{
private:
    int salary;
public:
    PermanentWorker(char* name, int money)
        :Employee(name), salary(money)
    { }

    int GetPay() const
    {
        return salary;
    }

    void ShowSalaryInfo() const
    {
        ShowYourName();
        cout<<"Salary : "<<GetPay()<<endl<<endl;
    }
};

class TemporaryWorker:public Employee
{
private:
    int WorkTime;
    int PayPerHour;
public:
    TemporaryWorker(char* name, int pay)
        :Employee(name), WorkTime(0), PayPerHour(pay)
    { }

    void AddWorktime(int time)
    {
        WorkTime+=time;
    }
    int GetPay() const
    {
        return WorkTime*PayPerHour;
    }
    void ShowSalaryInfo() const
    {
        ShowYourName();
        cout<<"Salary : "<<GetPay()<<endl<<endl;
    }
};

class SalesWorker:public PermanentWorker
{
private:
    int SaleResult;
    double bonusRatio;
public:
    SalesWorker(char* name, int money, double Ratio)
        :PermanentWorker(name, money), SaleResult(0), bonusRatio(Ratio)
    { }

    void AddSalesResult(int value)
    {
        SaleResult+=value;
    }

    int GetPay() const
    {
        return PermanentWorker::GetPay()+(int)(SaleResult*bonusRatio);
    }

    void ShowSalaryInfo() const
    {
        ShowYourName();
        cout<<"Salary : "<<GetPay()<<endl<<endl;
    }
};

class ForeignSalesWorker:public SalesWorker
{
private:
    double Risk;
public:
    ForeignSalesWorker(char* name, int money, double Ratio, int RiskRatio)
        :SalesWorker(name, money, Ratio), Risk((double)RiskRatio)
    { }

     int GetPay() const
    {
        return SalesWorker::GetPay()+(SalesWorker::GetPay()*(Risk/100));
    }

    void ShowSalaryInfo() const
    {
        ShowYourName();
        cout<<"Salary : "<<SalesWorker::GetPay()<<endl;
        cout<<"risk pay : "<<SalesWorker::GetPay()*(Risk/100)<<endl;
        cout<<"sum : "<<GetPay()<<endl<<endl;
    }
};

class EmployeeHandler
{
private:
    Employee* empList[100];
    int empNum;
public:
    EmployeeHandler() :empNum(0) {}

    void AddEmployee(Employee *emp)
    {
        empList[empNum++]=emp;
    }

    void ShowAllSalaryInfo() const
    {
        for(int i=0;i<empNum;i++)
            empList[i]->ShowSalaryInfo();
    }

    void ShowTotalSalary() const
    {
        int sum=0;

        for(int i=0;i<empNum;i++)
            sum+=empList[i]->GetPay();

        cout<<"Salary Sum : "<<sum<<endl;
    }

    ~EmployeeHandler()
    {
        for(int i=0;i<empNum;i++)
            delete empList[i];
    }
};

int main(void)
{
    EmployeeHandler handler;

    ForeignSalesWorker* fseller1=new ForeignSalesWorker("Hong", 1000, 0.1,RISK_LEVEL::RISK_A);
    fseller1->AddSalesResult(7000);
    handler.AddEmployee(fseller1);

    ForeignSalesWorker* fseller2=new ForeignSalesWorker("Yoon", 1000, 0.1,RISK_LEVEL::RISK_B);
    fseller2->AddSalesResult(7000);
    handler.AddEmployee(fseller2);

    ForeignSalesWorker* fseller3=new ForeignSalesWorker("Lee", 1000, 0.1,RISK_LEVEL::RISK_C);
    fseller3->AddSalesResult(7000);
    handler.AddEmployee(fseller3);


    handler.ShowAllSalaryInfo();

    handler.ShowTotalSalary();

    return 0;
}
