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
     Rectangle 클래스 rec를 정의 하면서, 생성자(Rectangle)을 통해서
     맴버 객체(upLeft, lowRight)를 초기화 하고 있다. */

    rec.ShowRecInfo();
    return 0;
}
