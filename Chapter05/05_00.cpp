#include<iostream>
using std::cin;
using std::cout;
using std::endl;

class SoSimple
{
private:
    int num1;
    int num2;
public:
    SoSimple(int n1, int n2):num1(n1), num2(n2)
    {

    }

    void ShowSimpleData()
    {
        cout<<"num1("<<num1<<"), "<<"num2("<<num2<<")"<<endl<<endl;
    }
};

int main(void)
{
    int num(20);
    int& ref(num);

    cout<<"num(20) : "<<num<<endl;
    cout<<"&ref(num) :"<<ref<<endl;

    cout<<"============================="<<endl;
    cout<<"SoSimple sim1(15,20)"<<endl;

    SoSimple sim1(15, 20);
    sim1.ShowSimpleData();

    cout<<"============================="<<endl;
    cout<<"SoSimple sim2=sim1"<<endl;

    SoSimple sim2=sim1;
    sim2.ShowSimpleData();

    cout<<"============================="<<endl;
    cout<<"SoSimple sim3(sim1)"<<endl;

    SoSimple sim3(sim1);
    sim3.ShowSimpleData();
    return 0;
}
