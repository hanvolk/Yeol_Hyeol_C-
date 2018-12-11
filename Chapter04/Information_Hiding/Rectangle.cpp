#include <iostream>
#include "Rectangle.h"

using std::cin;
using std::cout;
using std::endl;

bool Rectangle::InitMembers(const Point& ul, const Point& lr)
{
  /*
   �� ���(ul), �� �ϴ�(lr)�� �ʱ�ȭ ��ų Point Ŭ������ �Ű����� ���� �޾Ƽ�
   �� ��ܰ�, �� �ϴ��� ��ǥ�� �ڹٲ�� ���� �˻� �Ѵ�.
   */
    if(ul.GetX()>lr.GetX() || ul.GetY()>lr.GetY())
    {
        cout<<"�߸��� ��ġ���� ����"<<endl;
        return false;
    }

    upLeft=ul;
    lowRight=lr;
    return true;
}

void Rectangle::ShowRecInfo() const
{
    cout<<"�� ��� : "<<'['<<upLeft.GetX()<<", "<<upLeft.GetY()<<']'<<endl;
    cout<<"�� �ϴ� : "<<'['<<lowRight.GetX()<<", "<<lowRight.GetY()<<']'<<endl;
}
