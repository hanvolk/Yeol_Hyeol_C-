#include<iostream>
#include<cstring>
using std::cin;
using std::cout;
using std::endl;

class BBB;

class AAA
{
private:
    int n1;
    friend class BBB;

public:
    AAA(int n):n1(n){};

    void ShowData(void)
    {
        cout<<"AAA(n1) : "<<n1<<endl;
    }

    void ShowFriendData(BBB& obj);
};

class BBB
{
private:
    int num1;
    friend class AAA;

public:
    BBB(int n):num1(n){};

    void ShowData(void)
    {
        cout<<"BBB(num1) : "<<num1<<endl;
    }

    void ShowFriendData(AAA& obj);
};

void AAA::ShowFriendData(BBB& obj)
{
    cout<<"[Access BBB In AAA] : "<<obj.num1<<endl;
}

void BBB::ShowFriendData(AAA& obj)
{
    cout<<"[Access AAA in BBB] : "<<obj.n1<<endl;
}

int main(void)
{
    AAA obj1(10);
    BBB obj2(20);

    obj1.ShowData();
    obj2.ShowData();

    obj1.ShowFriendData(obj2);
    obj2.ShowFriendData(obj1);

}
