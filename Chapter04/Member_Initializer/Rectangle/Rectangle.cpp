#include <iostream>
#include "Rectangle.h"
using std::cin;
using std::cout;
using std::endl;

Rectangle::Rectangle(const int& x1, const int& y1, const int& x2, const int& y2):upLeft(x1, y1), lowRight(x2,y2)
{
/*
    Rectangle Ŭ������ ������ �Լ�, 4���� int�� ������(x1 ~ y2)�� �μ��� �޾Ƽ� MemberInitializer�� �̿��ؼ�
    Rectangle Ŭ������ �ɹ� ������ �ִ� PointŬ���� upLeft�� lowRight�� �ʱ�ȭ �ϰ� �ִ�.
 */
}



 void Rectangle::ShowRecInfo() const
 {
     cout<<"�� ��� : "<<'['<<upLeft.GetX()<<", "<<upLeft.GetY()<<']'<<endl;
     cout<<"�� �ϴ� : "<<'['<<lowRight.GetX()<<", "<<lowRight.GetY()<<']'<<endl;
     /* ����(RectangleŬ����)������ PointŬ����(upLeft,lowRight)�� �ɹ� ������ x, y(Private)��
      ���� ������ �Ұ��� �ϱ� ������ GetX(), GetY() �� ���� �Լ��� �ʿ��ϴ�. */
 }


