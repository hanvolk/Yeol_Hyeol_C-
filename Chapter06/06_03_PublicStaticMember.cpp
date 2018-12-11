#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class SoSimple
{
public:
    static int simObjCnt;
public:
    SoSimple()
    {
        simObjCnt++;
    }
};
int SoSimple::simObjCnt=0;

int main(void)
{
    cout<<SoSimple::simObjCnt<<"��° SoSimple ��ü"<<endl;
    /*
     ��ü ���� ���� ������ Ŭ������ �̸��� �̿��ؼ� simObjCnt(static ����)�� ����
     static �ɹ� ������ ��ü �ȿ� ���� ���� �ʱ� ������ ���� �ϴ�.
     ��, public���� ����� static �ɹ��� �̷������� ��𼭵� ������ �����ϴ�.
    */

    SoSimple sim1;
    SoSimple sim2;

    cout<<SoSimple::simObjCnt<<"��° SoSimple ��ü"<<endl;
    cout<<sim1.simObjCnt<<"��° SoSimple ��ü"<<endl;
    cout<<sim2.simObjCnt<<"��° SoSimple ��ü"<<endl;

    return 0;
}
