#include <iostream>
#include "point.h"

using std::cin;
using std::cout;
using std::endl;

// 맴버 면수 x, y를 초기화 하기 위한 함수
bool Point::InitMembers(int xpos, int ypos)
{
    if(xpos<0 || xpos>100 || ypos<0 || ypos>100) // xpos와 ypos에 대한 유효성 검사
    {
        cout<<"벗어난 범위의 값을 전달"<<endl;
        return false;  // 잘못된 값이면 false를 반환
    }

    //올바른 값이면 x, y를 각각 초기화 하고 true를 반환
    x=xpos;
    y=ypos;
    return true;
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
