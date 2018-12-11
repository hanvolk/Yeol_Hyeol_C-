#include<iostream>

namespace Gjcom
{
    void ShowInfo(void);
    void OpenStore(void);
}

namespace Osung
{
    void ShowInfo(void);
}

int main(void)
{
    Gjcom::ShowInfo();
    return 0;
}

void Gjcom::ShowInfo(void)
{
    std::cout<<"GyeongJin Computer Academy"<<std::endl;
    OpenStore();
    Osung::ShowInfo();
}

void Gjcom::OpenStore(void)
{
    std::cout<<"Open GyeongJin Computer"<<std::endl;
}

void Osung::ShowInfo(void)
{
    std::cout<<"Osung Electronic Company"<<std::endl;
    Gjcom::OpenStore();
}
