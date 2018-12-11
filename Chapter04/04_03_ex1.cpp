#include<iostream>
#include<cmath>

using std::cin;
using std::cout;
using std::endl;

class Point
{
private:
    int xpos, ypos;
public:
    Point(int x, int y)
    {
        xpos=x;
        ypos=y;
    }
    void ShowPointInfo()  // ���� ��ǥ�� ���
    {
        cout<<"["<<xpos<<", "<<ypos<<"]"<<endl;
    }
};

class Circle
{
private:
    Point center; //Point Ŭ������ ������� �ϴ� �߽��� Ŭ����
    int radius;
public:
    Circle(int x, int y, int rad):center(x, y),radius(rad){}
    void ShowCircleInfo() // ���� ������ ���
    {
        cout<<"Radius : "<<radius<<endl;
        center.ShowPointInfo(); //PointŬ����(center)�� ShowPointInfo ȣ��
    }
};

class Ring // Ring(��) �� ǥ���ϴ� Ring Ŭ����
{
private:  // Circle Ŭ������ ������� �ϴ� ���� ��(Inner)�� �ٱ��� ��(Outter)�� private�� ����
    Circle Inner;
    Circle Outter;
public:
    Ring(int inX, int inY, int inR, int outX, int outY, int outR):Inner(inX,inY,inR), Outter(outX, outY, outR)
    {

    }

    void ShowRingInfo() // ���� ����(Inner�� Outter�� ������ ����) ���
    {
        cout<<"Inner Circle Info : "<<endl;
        Inner.ShowCircleInfo();
        cout<<"Outter Circle Info : "<<endl;
        Outter.ShowCircleInfo();
    }
};

int main(void)
{
    Ring ring(1,1,4,2,2,9);
    ring.ShowRingInfo();
    return 0;
}
