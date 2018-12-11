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
    PartTimeStudent* ptr1 = new PartTimeStudent();
    Student* ptr2=ptr1;
    Person* ptr3=ptr2;

    ptr1->PersonFunc();
    ptr1->StudentFunc();
    ptr1->PartTimeFunc();

    ptr3->PersonFunc();
//    ptr3->StudentFunc();
  //  ptr3->PartTimeFunc();

    Person* ptr4=new Person();
    Student* ptr5=ptr4;
   // PartTimeStudent* ptr3= ptr2;


}
