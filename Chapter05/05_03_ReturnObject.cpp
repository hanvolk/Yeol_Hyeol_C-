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
    SoSimple(int n1, int n2):num1(n1), num2(n2) // constructor
    {
        cout<<"Called Constructor"<<endl;
    }
    SoSimple(const SoSimple &copy):num1(copy.num1), num2(copy.num2) // Copy constructor
    {
        cout<<"Called Copy Constructor"<<endl;
    }

    SoSimple AddNum(int n1, int n2)
    {
        num1+=n1;
        num2+=n2;

        cout<<"this("<<this<<")"<<endl;

        return *this;
    }

    SoSimple& AddNum2(int n1, int n2)
    {
        num1+=n1;
        num2+=n2;

        cout<<"this("<<this<<")"<<endl;

        return *this;
    }

    void ShowData() // The Object is passed as parameter
    {
        cout<<"this("<<this<<")"<<endl;
        cout<<"Num1 : "<<num1<<endl;
        cout<<"Num2 : "<<num2<<endl;
    }

    ~SoSimple()
    {
        cout<<"this("<<this<<")"<<endl;
        cout<<"Called Destructor"<<endl;
    }

};

void ShowData1(SoSimple Ob) // The Object is passed as parameter
{
    cout<<"Ob("<<&Ob<<endl;
    Ob.ShowData();
}


void Showdata2(SoSimple &Ob) // The Object is paseed as parameter in the form of reference
{
   Ob.ShowData();
}

int main(void)
{
    SoSimple Ob1(10,20); // creating Ob1 - call constructor
    SoSimple Ob2(Ob1); // creating Ob2 - call copy Constructor
    cout<<"------- Create Ob1, Ob2 ----------------"<<endl;
    cout<<"Ob1("<<&Ob1<<")"<<endl;
    cout<<"Ob2("<<&Ob2<<")"<<endl;

    cout<<"------- Before ShowData1() ----------------"<<endl;
    ShowData1(Ob1);
    cout<<"------- After ShowData1() ----------------"<<endl<<endl;

    cout<<"------- Befor Ob2.AddNum() ----------------"<<endl;
    Ob2.AddNum(1,2);
    cout<<"------- After Ob2.AddNum() ----------------"<<endl<<endl;

    cout<<"------- Befor obj=Ob2.AddNum() ----------------"<<endl;
    SoSimple obj=Ob2.AddNum(1,2);
    cout<<"------- After obj=Ob2.AddNum() ----------------"<<endl<<endl;

    cout<<"------ Befor obj.ShowData() ---------"<<endl;
    obj.ShowData();
    cout<<"------ After obj.ShowData() ---------"<<endl<<endl;

    cout<<"--- Befor &ref=Ob.AddNum2() ---------"<<endl;
    SoSimple &ref=Ob2.AddNum2(1,2);
    cout<<"--- After &ref=Ob.AddNum2() ---------"<<endl<<endl;

    Ob1.ShowData();

    cout<<"----- Befor return 0   --------"<<endl<<endl;
    return 0;
}
