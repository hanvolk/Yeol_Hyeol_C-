#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class First
{
public:
    void FirstFunc(){cout<<"Firts Func() in First"<<endl;}
    void MyFunc(){cout<<"MyFunc in First"<<endl;}
    virtual void MyVirtualFunc(){cout<<"MyVirtualFunc in First"<<endl;}
};

class Second:public First
{
public:
    void SecondFunc(){cout<<"Second Func() in Second"<<endl;}
    void MyFunc(){cout<<"MyFunc in Second"<<endl;}
    virtual void MyVirtualFunc(){cout<<"MyVirtualFunc in Second"<<endl;}
};

class Third:public Second
{
public:
    void ThirdFunc(){cout<<"Third Func() in Third"<<endl;}
    void MyFunc(){cout<<"MyFunc in Third"<<endl;}
    virtual void MyVirtualFunc(){cout<<"MyVirtualFunc in Third"<<endl;}
};

int main(void)
{
    cout<<"==== Third obj3 ===="<<endl;
    Third obj3;
    obj3.FirstFunc();
    obj3.SecondFunc();
    obj3.ThirdFunc();

    cout<<endl<<"==== First obj1 ===="<<endl;
    First obj1;
    obj1.FirstFunc();
    //obj1.SecondFunc();

    cout<<endl<<"=== Third Referenc tRef ===="<<endl;
    Third& tRef=obj3;
    tRef.FirstFunc();
    tRef.SecondFunc();
    tRef.ThirdFunc();
    tRef.MyFunc();

    cout<<endl<<"=== First Referenc fRef ==="<<endl;
    First& fRef=obj1;
    fRef.FirstFunc();
   // fRef.SecondFunc();
    fRef.MyFunc();
    fRef.MyVirtualFunc();


    cout<<endl<<"=== First Reference fRef1=obj3 ==="<<endl;
    First& fRef1=obj3;
    fRef1.FirstFunc();
    //fRef1.ThirdFunc();
    fRef1.MyFunc();
    fRef1.MyVirtualFunc();



}
