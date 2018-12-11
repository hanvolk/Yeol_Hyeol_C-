#include<iostream>
//#include<cstdlib>
using namespace std;

class Point
{
private:
    int xpos, ypos;
public:
    Point(int x=0, int y=0):xpos(x), ypos(y){cout<<"    Point Ŭ���� ������ ȣ��"<<endl;}

    Point& operator=(const Point& ref)
    {
        xpos=ref.xpos;
        ypos=ref.ypos;
        cout<<"    Point Ŭ������ ���Կ����� ȣ�� "<<endl;
        return *this;
    }

   friend ostream& operator<<(ostream& os, const Point& pos);
   friend ostream& operator<<(ostream& os, const Point* pos);

};

ostream& operator<<(ostream& os, const Point& pos)
{
    os<<'['<<pos.xpos<<", "<<pos.ypos<<']'<<endl;
    return os;
}

ostream& operator<<(ostream& os, const Point* pos)
{
    os<<'['<<pos->xpos<<", "<<pos->ypos<<']'<<endl;
    return os;
}

typedef Point* POINT_PTR;

class uArray
{
private:
    POINT_PTR* arr;
    int arrlen;

    uArray(const uArray& arr){cout<<"   ���� ������ ȣ�� "<<endl;}
    uArray& operator=(const uArray& arr){cout<<"   ���� ������ ȣ�� "<<endl;}

public:
    uArray(int len):arrlen(len)
    {
        cout<<"    arr �����Ҵ� "<<endl;
        arr=new POINT_PTR[len];
    }

    POINT_PTR& operator[](int idx)
    {
        cout<<"    operator []ȣ��"<<endl;
        return arr[idx];
    }

    POINT_PTR operator[](int idx) const
    {
        cout<<"    const operator []ȣ��"<<endl;
        return arr[idx];
    }

    int GetArrLen() const {return arrlen;}
    ~uArray() {delete []arr;}
};

int main(void)
{
    cout<<"uArray arr(3);"<<endl;
    uArray arr(3);
    cout<<"===================================="<<endl<<endl;

    cout<<"arr[0]=new Point(3,4);"<<endl;
    arr[0]=new Point(3,4);
    cout<<"===================================="<<endl<<endl;

    cout<<"arr[1]=new Point(5,6);"<<endl;
    arr[1]=new Point(5,6);
    cout<<"===================================="<<endl<<endl;

    cout<<"arr[2]=new Point(7,8);"<<endl;
    arr[2]=new Point(7,8);
    cout<<"===================================="<<endl<<endl;

    for(int i=0;i<arr.GetArrLen();i++)
        cout<<(arr[i]);

    for(int i=0;i<arr.GetArrLen();i++)
        delete arr[i];

    return 0;


}
