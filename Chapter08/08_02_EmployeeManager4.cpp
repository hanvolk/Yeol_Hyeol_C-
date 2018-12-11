#include<iostream>
#include<cstring>
using std::cout;
using std::cin;
using std::endl;

class Employee
{
private:
    char name[100];
public:
    Employee(char* name)
    {
        strcpy(this->name,name);
    }

    void ShowYourName() const
    {
        cout<<"Name : "<<name<<endl;
    }

    virtual int GetPay() const
    {
        return 0;
    }

    virtual void ShowSalaryInfo() const{}
};

class PermanentWorker:public Employee
{
private:
    int Salary;
public:
    PermanentWorker(char* name, int money):Employee(name), Salary(money)
    {}
    int GetPay() const
    {
        return Salary;
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
    TemporaryWorker(char* name, int pay):Employee(name), WorkTime(0), PayPerHour(pay)
    { }

    void AddWorkTime(int time)
    {
        WorkTime+=time;
    }

    int GetPay() const
    {
        return WorkTime* PayPerHour;
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
    int SalesResult;
    double bonusRatio;
public:
    SalesWorker(char* name, int money, double Ratio):PermanentWorker(name, money), SalesResult(0), bonusRatio(Ratio)
    { }

    void AddSalesResult(int value)
    {
        SalesResult+=value;
    }

    int GetPay() const
    {
        return PermanentWorker::GetPay()+(int)(SalesResult*bonusRatio);
    }

    void ShowSalaryInfo() const
    {
        ShowYourName();
        cout<<"Salary : "<<GetPay()<<endl<<endl;
    }
};

class EmployeeHandler
{
private:
    Employee* empList[100];
    int empNum;
public:
    EmployeeHandler():empNum(0){}

    void AddEmployee(Employee* emp)
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

        cout<<"Salary SUM : "<<sum<<endl;
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

    handler.AddEmployee(new PermanentWorker("Kim",1000));
    handler.AddEmployee(new PermanentWorker("Lee",1500));

    TemporaryWorker* alba=new TemporaryWorker("Jung",700);
    alba->AddWorkTime(5);
    handler.AddEmployee(alba);

    SalesWorker* seller=new SalesWorker("Hong",1000,0.1);
    seller->AddSalesResult(7000);
    handler.AddEmployee(seller);
    handler.ShowAllSalaryInfo();
    handler.ShowTotalSalary();
    return 0;
}
