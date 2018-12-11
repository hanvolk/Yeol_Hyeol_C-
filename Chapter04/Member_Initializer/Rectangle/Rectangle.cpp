#include <iostream>
#include "Rectangle.h"
using std::cin;
using std::cout;
using std::endl;

Rectangle::Rectangle(const int& x1, const int& y1, const int& x2, const int& y2):upLeft(x1, y1), lowRight(x2,y2)
{
/*
    Rectangle 클래스의 생성자 함수, 4개의 int형 데이터(x1 ~ y2)를 인수로 받아서 MemberInitializer를 이용해서
    Rectangle 클래스의 맴버 변수로 있는 Point클래스 upLeft와 lowRight를 초기화 하고 있다.
 */
}



 void Rectangle::ShowRecInfo() const
 {
     cout<<"좌 상단 : "<<'['<<upLeft.GetX()<<", "<<upLeft.GetY()<<']'<<endl;
     cout<<"우 하단 : "<<'['<<lowRight.GetX()<<", "<<lowRight.GetY()<<']'<<endl;
     /* 여기(Rectangle클래스)에서는 Point클래스(upLeft,lowRight)의 맴버 변수인 x, y(Private)에
      직접 접근이 불가능 하기 때문에 GetX(), GetY() 와 같은 함수가 필요하다. */
 }


