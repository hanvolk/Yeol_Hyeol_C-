#include <iostream>
#include "Car.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
    Car run99;
    run99.InitiMembers("run99",100);

    run99.Accel();
    run99.Accel();
    run99.Accel();
    run99.ShowCarState();
    run99.Break();
    run99.ShowCarState();

    return 0;
}
