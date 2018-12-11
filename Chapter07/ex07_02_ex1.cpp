#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class Rectangle
{
private:
    int width;
    int height;
public:
    Rectangle(int i, int j):width(i), height(j){}
    void ShowAreaInfo(void)
    {
        cout<<"¸éÀû : "<<(width*height)<<endl;
    }
};

class Square:public Rectangle
{
public:
    Square(int len):Rectangle(len, len){};
};

int main(void)
{
    Rectangle rec(4,3);
    rec.ShowAreaInfo();

    Square sqr(7);
    sqr.ShowAreaInfo();

    return 0;
}

