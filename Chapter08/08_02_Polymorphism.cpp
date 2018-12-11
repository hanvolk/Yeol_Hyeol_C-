#include <iostream>
#include <cstring>
using std::cin;
using std::cout;
using std::endl;

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
    Employee* ptr;
    ptr=new PermanentWorker("Kim", 1000);
    ptr->ShowSalaryInfo();


    ptr=new PermanentWorker("Lee",2500);
    ptr->ShowSalaryInfo();


    return 0;
}
