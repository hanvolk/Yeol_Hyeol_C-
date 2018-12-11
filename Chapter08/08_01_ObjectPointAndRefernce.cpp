#include<iostream>
using std::cin;
using std::cout;
using std::endl;

class Person
{
public:
    void PersonFunc()
    {
        cout<<"PersonFunc() "<<endl;
    }
};

class Student:public Person
{
public:
    void StudentFunc()
    {
        cout<<"StudentFunc() "<<endl;
    }
};

class PartTimeStudent:public Student
{
public:
    void PartTimeFunc()
    {
        cout<<"PartTimeFunc() "<<endl;
    }
};

int main(void)
{
    Person* ptr=new Person();
    ptr=new Student();
    ptr=new PartTimeStudent();


    Student* ptr1=new Student();
    PartTimeStudent* ptr2=new PartTimeStudent();

    ptr->PersonFunc();
   // ptr->StudentFunc();
   // ptr->PartTimeFunc();

     ptr1->PersonFunc();
     ptr1->StudentFunc();
   //  ptr1->PartTimeFunc();

     ptr2->PersonFunc();
     ptr2->StudentFunc();
     ptr2->PartTimeFunc();
}
