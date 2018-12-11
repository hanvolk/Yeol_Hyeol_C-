#include<iostream>
using std::cin;
using std::cout;
using std::endl;

class Person
{
public:
    void MyFunc()
    {
        cout<<"MyFunc in Person Class"<<endl;
    }
    void MyFunc2()
    {
        cout<<"MyFunc2 in Person Class"<<endl;
    }
};

class Student:public Person
{
public:
    void MyFunc()
    {
        cout<<"MyFunc in Student Class"<<endl;
    }


};

int main(void)
{
    Student obj;
    obj.MyFunc();
    obj.MyFunc2();
    obj.Person::MyFunc();

}
