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
    void ShowPointInfo()  // 점의 좌표를 출력
    {
        cout<<"["<<xpos<<", "<<ypos<<"]"<<endl;
    }
};

class Circle
{
private:
    Point center; //Point 클래스를 기반으로 하는 중심점 클래스
    int radius;
public:
    Circle(int x, int y, int rad):center(x, y),radius(rad){}
    void ShowCircleInfo() // 원의 정보를 출력
    {
        cout<<"Radius : "<<radius<<endl;
        center.ShowPointInfo(); //Point클래스(center)의 ShowPointInfo 호출
    }
};

class Ring // Ring(고리) 를 표현하는 Ring 클래스
{
private:  // Circle 클래스를 기반으로 하는 안쪽 원(Inner)와 바깥쪽 원(Outter)를 private로 정의
    Circle Inner;
    Circle Outter;
public:
    Ring(int inX, int inY, int inR, int outX, int outY, int outR):Inner(inX,inY,inR), Outter(outX, outY, outR)
    {

    }

    void ShowRingInfo() // 링의 정보(Inner와 Outter의 정보를 같이) 출력
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
