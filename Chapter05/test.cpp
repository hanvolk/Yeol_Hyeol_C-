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
        cout<<"Called Constructor"<<endl;
    }
    SoSimple(const SoSimple &copy):num1(copy.num1), num2(copy.num2)
    {
        cout<<"Called Copy Constructor"<<endl;
    }
    ~SoSimple()
    {
        cout<<"Called Destructor"<<endl;
    }
    int GetNum1(){return num1;}
    int GetNum2(){return num2;}
};

void Myfunction1(SoSimple Obj) // The Object is passed as parameter
{
    cout<<Obj.GetNum1()<<endl;
    cout<<Obj.GetNum2()<<endl;
}


void Myfunction2(SoSimple &Obj) // The Object is paseed as parameter in the form of reference
{
    cout<<Obj.GetNum1()<<endl;
    cout<<Obj.GetNum2()<<endl;
}

int main(void)
{
    SoSimple Ob1(10,20); // creating Ob1
    //Myfunction1(Ob1); // Ob1 is passed Myfunction as parameter
    Myfunction2(Ob1); // Ob1's reference is passed as parameter

}
