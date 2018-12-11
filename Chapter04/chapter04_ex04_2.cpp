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
    void Init(int x, int y)
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
    void Init(int x, int y, int rad) // 원의 중심점과 반지름을 초기화 하는 함수
    {
        center.Init(x,y); // 중심점 초기화
        radius=rad;        // 반지름 초기화
    }
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
    void Init(int inX, int inY, int inR, int outX, int outY, int outR)
    {
        int distance; // 두 점(Inner, Outter의 중심점)사이의 거리
        //거리 = sqrt(power(가로 길이^2 + 세로 길이^2)) --> 피타고라스 정리 참고
        distance=(int)sqrt(pow((double)abs(inX-outX),2.0)+pow((double)abs(inY-outY),2.0));

        // 정상적인 링 모양이 되려면 (두점 사이의 거리 + Inner의 반지름) 이 Outter의 반지름 보다 작아야 한다.
        if(distance+inR<outR)
        {
            Inner.Init(inX,inY,inR);
            Outter.Init(outX, outY, outR);
        }
        else
        {
            cout<<"잘못된 정보 입니다."<<endl;
        }
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
    Ring ring;
    ring.Init(1,1,4,2,2,9);
    ring.ShowRingInfo();
    return 0;
}
