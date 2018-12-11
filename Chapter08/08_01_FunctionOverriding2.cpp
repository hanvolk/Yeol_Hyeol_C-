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
/*
    void MyFunc2()
    {
        cout<<"MyFunc2 in Person Class"<<endl;
    }
*/
};

class Student:public Person
{
public:
    void MyFunc()
    {
        cout<<"MyFunc in Student Class"<<endl;
    }

    void MyFunc2()
    {
        cout<<"MyFunc2 in Student Class"<<endl;
    }
};

int main(void)
{
    Student* Obj1=new Student();
    Obj1->MyFunc();
    Obj1->MyFunc2();

    Person* Obj2=Obj1;
    Obj2->MyFunc();
   // Obj2->MyFunc2();

   Person* ptr1;
   //Student* ptr2=ptr1;
}
