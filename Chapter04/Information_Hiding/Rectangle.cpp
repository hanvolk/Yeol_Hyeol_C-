#include <iostream>
#include "Rectangle.h"

using std::cin;
using std::cout;
using std::endl;

bool Rectangle::InitMembers(const Point& ul, const Point& lr)
{
  /*
   좌 상단(ul), 우 하단(lr)을 초기화 시킬 Point 클래스를 매개변수 전달 받아서
   좌 상단과, 우 하단의 좌표가 뒤바뀌는 것을 검사 한다.
   */
    if(ul.GetX()>lr.GetX() || ul.GetY()>lr.GetY())
    {
        cout<<"잘못된 위치정보 전달"<<endl;
        return false;
    }

    upLeft=ul;
    lowRight=lr;
    return true;
}

void Rectangle::ShowRecInfo() const
{
    cout<<"좌 상단 : "<<'['<<upLeft.GetX()<<", "<<upLeft.GetY()<<']'<<endl;
    cout<<"우 하단 : "<<'['<<lowRight.GetX()<<", "<<lowRight.GetY()<<']'<<endl;
}
