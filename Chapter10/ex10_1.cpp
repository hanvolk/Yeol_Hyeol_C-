#include <iostream>
using namespace std;

class Point;
Point operator-(Point& ref1, Point& ref2);
bool operator==(Point& ref1, Point& ref2);
bool operator!=(Point& ref1, Point& ref2);

class Point
{
private:
    int num1;
    int num2;
public:
    Point():num1(0), num2(0){}
    Point(int n1, int n2):num1(n1), num2(n2){}
    void InitData(int n1, int n2)
    {
        num1=n1;
        num2=n2;
    }
    Point operator+(Point& ref);
    Point operator+=(Point& ref);
    Point operator-=(Point& ref);
    friend Point operator-(Point& ref1, Point& ref2);
    friend bool operator==(Point& ref1, Point& ref2);
    friend bool operator!=(Point& ref1, Point& ref2);
    void ShowData(void);

};

int main(void)
{
    Point pos1(10,20);
    Point pos2(3,5);
    Point pos3=pos1+pos2;
    cout<<"pos1 : ";pos1.ShowData();
    cout<<"pos2 : ";pos2.ShowData();

    cout<<endl<<"===== pos1 + pos2 ===== "<<endl;
    cout<<"pos3 : ";pos3.ShowData();

    cout<<endl<<"===== pos1 - pos2 ===== "<<endl;
    pos3=pos1-pos2;
    cout<<"pos3 : ";pos3.ShowData();

    cout<<endl<<"===== pos1 += pos2 ===== "<<endl;
    pos1+=pos2;
    cout<<"pos1 : ";pos1.ShowData();

    cout<<endl<<"===== pos1 -= pos2 ===== "<<endl;
    pos1-=pos2;
    cout<<"pos1 : ";pos1.ShowData();

    cout<<endl<<"===== pos1 == pos2 ===== "<<endl;
    if(pos1==pos2)
        cout<<"동일한 객체"<<endl;
    else
        cout<<"서로 다른 값을 지닌 객체 "<<endl;

    cout<<endl<<"===== pos1 != pos2 ===== "<<endl;
    if(pos1!=pos2)
        cout<<"서로 다른 값을 지닌 객체"<<endl;
    else
        cout<<"동일한 객체 "<<endl;

    pos1.InitData(10,20);
    pos2.InitData(10,20);

    cout<<endl<<"===== pos1 == pos2 ===== "<<endl;
    if(pos1==pos2)
        cout<<"동일한 객체"<<endl;
    else
        cout<<"서로 다른 값을 지닌 객체 "<<endl;

    cout<<endl<<"===== pos1 != pos2 ===== "<<endl;
    if(pos1!=pos2)
        cout<<"서로 다른 값을 지닌 객체"<<endl;
    else
        cout<<"동일한 객체 "<<endl;
}

Point Point::operator+(Point& ref)
{
    Point result;
    result.num1=this->num1+ref.num1;
    result.num2=this->num2+ref.num2;
    return result;

}


Point operator-(Point& ref1, Point& ref2)
{
    Point result;
    result.num1=ref1.num1-ref2.num1;
    result.num2=ref1.num2-ref2.num2;
    return result;
}

void Point::ShowData(void)
{
    cout<<"num1 : "<<num1<<", ";
    cout<<"num2 : "<<num2<<endl;
}

Point Point::operator+=(Point& ref)
{
    Point result;
    result.num1=this->num1+=ref.num1;
    result.num2=this->num2+=ref.num2;
    return result;
}

Point Point::operator-=(Point& ref)
{
    Point result;
    result.num1=this->num1-=ref.num1;
    result.num2=this->num2-=ref.num2;
    return result;
}

bool operator==(Point& ref1, Point& ref2)
{
    if(ref1.num1==ref2.num1 && ref1.num2==ref2.num2)
        return true;
    else
        return false;
}

bool operator!=(Point& ref1, Point& ref2)
{
    if(ref1==ref2)
        return false;
    else
        return true;
}

