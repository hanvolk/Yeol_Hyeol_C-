#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class SinivelCap
{
public:
    void Take() const{cout<<"�๰ ������ ġ���մϴ�. "<<endl;}
};

class SneezeCap
{
public:
    void Take() const{cout<<"��ä�� ������ ġ���մϴ�. "<<endl;}
};

class SnuffleCap
{
public:
    void Take() const{cout<<"�ڸ��� ������ ġ���մϴ�. "<<endl;}
};

class CONTAC600
{
private:
    SinivelCap sin;
    SneezeCap sne;
    SnuffleCap snu;
public:
    void Take() const
    {
        sin.Take();
        sne.Take();
        snu.Take();
    }
};

class ColdPatient
{
public:
    void TakeCONTAC600(const CONTAC600& cap) const {cap.Take();}
};

int main(void)
{
    CONTAC600 cap;
    ColdPatient suffer;
    suffer.TakeCONTAC600(cap);
    return 0;
}