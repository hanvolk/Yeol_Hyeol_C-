#include<iostream>
#include<cstring>
using std::cin;
using std::cout;
using std::endl;

class First
{
private:
    char* strOne;
public:
    First(char* str)
    {
        cout<<"First Constructor"<<endl;
        strOne=new char[strlen(str)+1];
    }
    virtual ~First()
    {
        cout<<"~First"<<endl;
        delete []strOne;
    }
};

class Second:public First
{
private:
    char* strTwo;
public:
    Second(char* str1, char* str2):First(str1)
    {
        cout<<"Second Constructor"<<endl;
        strTwo=new char[strlen(str2)+1];
    }
    ~Second()
    {
        cout<<"~Second()"<<endl;
        delete []strTwo;
    }
};

int main(void)
{
    //Second obj2("simple", "Complex");

    First* ptr=new Second("string1","String2");
    delete ptr;

    return 0;
}
