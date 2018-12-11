#include<iostream>
using namespace std;

class Point
{
private:
    int xpos, ypos;
public:
    Point(int x=0, int y=0):xpos(x), ypos(y)
    {
        cout<<"Point 클래스 대입연산자 호출"<<endl;
    }

    Point& operator=(const Point& ref)
    {
        xpos=ref.xpos;
        ypos=ref.ypos;
        cout<<"Point 클래스의 대입연산자 호출"<<endl;
        return *this;
    }

    friend ostream& operator<<(ostream& os, const Point& pos);
};

ostream& operator<<(ostream& os, const Point& pos)
{
    os<<'['<<pos.xpos<<", "<<pos.ypos<<']'<<endl;
    return os;
}

class uArray
{
private:
    Point* arr;
    int arrlen;
    uArray(const uArray& arr){}
    uArray& operator=(const uArray& arr){}
public:
    uArray(int len):arrlen(len)
    {
        cout<<"arr동적할당"<<endl;
        arr=new Point[len];
    }
    Point& operator[](int idx)
    {
        cout<<"operator [] 호출"<<endl;
        return arr[idx];
    }
    Point operator[](int idx) const
    {
        cout<<"const operator[] 호출"<<endl;
    }
    int GetArrLen() const{return arrlen;}
};

int main(void)
{
    uArray arr(3);
    arr[0]=Point(3,4);
    arr[1]=Point(5,6);
    for(int i=0;i<arr.GetArrLen();i++)
        cout<<arr[i];

    return 0;
}
