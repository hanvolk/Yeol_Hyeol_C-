#include<iostream>

namespace Gjcom
{
    void ShowInfo(void)
    {
        std::cout<<"GyeongJinComputer Academy"<<std::endl;
    }
}

namespace Osung
{
    void ShowInfo(void)
    {
        std::cout<<"Osung Electronic"<<std::endl;
    }
}

int main(void)
{
    Gjcom::ShowInfo();
    Osung::ShowInfo();
}
