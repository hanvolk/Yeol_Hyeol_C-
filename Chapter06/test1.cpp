#include<iostream>
using std::cin;
using std::cout;
using std::endl;

class AAA;


class BBB
{
private:
    int num1;
    friend class AAA;
public:
    BBB(int n):num1(n){};

    void ShowData(void)
    {
        cout<<"[In class BBB] BBB(num1) : "<<num1<<endl;
    };

    void ShowFriendData(AAA &obj);   // BBB Ŭ���� �ȿ��� AAA Ŭ���� obj�� �޾Ƽ� AAA Ŭ������ private ������ ���
};


class AAA
{
private:
    int n1;
    //friend class BBB;
public:
    AAA(int n):n1(n){};
    void ShowData(void)
    {
        cout<<"[In clas AAA] AAA(n1) : "<<n1<<endl;
    };

    void ShowFriendData(BBB &obj);  // AAA Ŭ���� �ȿ��� BBB Ŭ���� obj�� �޾Ƽ� BBB Ŭ������ private ������ ���
    friend void BBB::FriendFucn(AAA& obj);
};



void AAA::ShowFriendData(BBB &obj)
{
    cout<<"[In class AAA] BBB(num1) : "<<obj.num1<<endl;
};


void BBB::ShowFriendData(AAA& obj);
 {
        cout<<"[In class BBB ] AAA(n1) : "<<obj.n1<<endl;
 }


int main(void)
{
    AAA obj1(10);
    BBB obj2(20);

    obj1.ShowData();
    obj2.FriendFucn(obj1);

}
