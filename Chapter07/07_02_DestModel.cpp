#include<iostream>
#include<cstring>
using std::cin;
using std::cout;
using std::endl;

class Person
{
private:
    char* name;
public:
    Person(char* myname)
    {
        name=new char[strlen(myname)+1];
        strcpy(name,myname);
    }
    ~Person()
    {
        delete []name;
    }
    void WhatYourName() const
    {
        cout<<"My name is "<<name<<endl;
    }
};

class UnivStudent : public Person
{
private:
    char* major;
public:
    UnivStudent(char* myname, char* mymajor)
        :Person(myname)
    {
        major=new char[strlen(mymajor)+1];
        strcpy(major,mymajor);
    }
    ~UnivStudent()
    {
        delete []major;
    }
    void WhoeAreYou() const
    {
        WhatYourName();
        cout<<"My mjaor is "<<major<<endl<<endl;
    }
};

int main(void)
{
    UnivStudent st1("kim", "Mathmatics");
    st1.WhoeAreYou();
    UnivStudent st2("Hong", "Physics");
    st2.WhoeAreYou();
    return 0;
}
