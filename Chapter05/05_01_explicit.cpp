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
    explicit SoSimple(int n1, int n2):num1(n1), num2(n2){}
    explicit SoSimple(const SoSimple &copy):num1(copy.num1), num2(copy.num2)
    {

    }

    void ShowData()
    {
        cout<<"num1 : "<<num1<<endl;
        cout<<"num2 : "<<num2<<endl;
    }
};

int main(void)
{
    SoSimple Obj1(10,20);
    SoSimple Obj2(Obj1);
    Obj1.ShowData();
    Obj2.ShowData();

    SoSimple Obj3=Obj1;

    return 0;
}
