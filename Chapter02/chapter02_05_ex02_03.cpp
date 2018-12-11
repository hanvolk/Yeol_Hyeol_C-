#include<iostream>
using std::cin;
using std::cout;
using std::endl;

typedef struct __point
{
    int xpos;
    int ypos;
}point;

point& PntAdder(const point& p1, const point& p2);

int main(void)
{
    point* ptr1=new point;
    point* ptr2=new point;

    (*ptr1)={10,20};
    (*ptr2)={1,2};

    point& result=PntAdder(*ptr1, *ptr2);

    cout<<ptr1->xpos<<','<<ptr1->ypos<<endl;
    cout<<ptr2->xpos<<','<<ptr2->ypos<<endl;
    cout<<result.xpos<<','<<result.ypos<<endl;

    delete ptr1;
    delete ptr2;
    delete &result;
}

point& PntAdder(const point& p1, const point& p2)
{
    point* buf=new point;
    *buf={(p1.xpos)+(p2.xpos),(p1.ypos)+(p2.ypos)};
    point& rbuf=*buf;
    return rbuf;
}
