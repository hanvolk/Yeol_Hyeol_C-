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
    virtual void ShowString() const
    {
        cout<<"String in FirstClass : "<<strOne<<endl;
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
    void ShowString() const
    {
        cout<<"String in SecondClass : "<<strTwo<<endl;
    }
    ~Second()
    {
        cout<<"~Second()"<<endl;
        delete []strTwo;
    }
};

class Third:public Second
{
private:
    char* strThree;
public:
    Third(char* str1, char* str2, char* str3):Second(str1, str2)
    {
        cout<<"Third Constructor"<<endl;
        strThree=new char[strlen(str3)+1];
    }
    void ShowString() const
    {
        cout<<"String in ThirdClass : "<<strThree<<endl;
    }
    ~Third()
    {
        cout<<"~Third()"<<endl;
        delete []strThree;
    }
};

int main(void)
{
    /*
    Third obj3("GyeongJin", "Computer","Academy");
    cout<<"============== Call Function ============="<<endl;
    obj3.ShowString();
    cout<<"============== End Function ============="<<endl;
    */


    First* ptr=new Third("GyeongJin","Computer","Academy");
    cout<<"============== Call Function ============="<<endl;
    ptr->ShowString();
    cout<<"============== End Function ============="<<endl;;
    delete ptr;

    return 0;
}
