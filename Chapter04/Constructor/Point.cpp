#include <iostream>
#include "point.h"

using std::cin;
using std::cout;
using std::endl;

Point::Point(const int& xpos, const int& ypos)
{
    x=xpos;
    y=ypos;
}

// 맴버 변수 x,y 값을 가져오기 위한 Access 함수
int Point::GetX() const {return x;}
int Point::GetY() const {return y;}

// 맴버 변수 x를 초기화 하기 위한 Access 함수
bool Point::SetX(int xpos)
{
    if(xpos<0 || xpos>100)
    {
        cout<<"벗어난 범위의 값 전달"<<endl;
        return false;
    }

    x=xpos;
    return true;
}

bool Point::SetY(int ypos)
{
    if(ypos<0 || ypos>100)
    {
        cout<<"벗어난 범위의 값 전달"<<endl;
        return false;
    }

    y=ypos;
    return true;
}
