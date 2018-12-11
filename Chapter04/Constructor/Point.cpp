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

// �ɹ� ���� x,y ���� �������� ���� Access �Լ�
int Point::GetX() const {return x;}
int Point::GetY() const {return y;}

// �ɹ� ���� x�� �ʱ�ȭ �ϱ� ���� Access �Լ�
bool Point::SetX(int xpos)
{
    if(xpos<0 || xpos>100)
    {
        cout<<"��� ������ �� ����"<<endl;
        return false;
    }

    x=xpos;
    return true;
}

bool Point::SetY(int ypos)
{
    if(ypos<0 || ypos>100)
    {
        cout<<"��� ������ �� ����"<<endl;
        return false;
    }

    y=ypos;
    return true;
}
