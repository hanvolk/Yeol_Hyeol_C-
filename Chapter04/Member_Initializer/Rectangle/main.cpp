#include <iostream>
#include "Point.h"
#include "Rectangle.h"
using std::cin;
using std::cout;
using std::endl;

int main(void)
{
    Rectangle rec(1,1,5,5);
    /*
     Rectangle Ŭ���� rec�� ���� �ϸ鼭, ������(Rectangle)�� ���ؼ�
     �ɹ� ��ü(upLeft, lowRight)�� �ʱ�ȭ �ϰ� �ִ�. */

    rec.ShowRecInfo();
    return 0;
}
