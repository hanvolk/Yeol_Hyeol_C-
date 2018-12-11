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
    cout<<SoSimple::simObjCnt<<"번째 SoSimple 객체"<<endl;
    /*
     객체 생성 이전 이지만 클래스의 이름을 이용해서 simObjCnt(static 변수)에 접근
     static 맴버 변수는 객체 안에 존재 하지 않기 때문에 가능 하다.
     즉, public으로 선언된 static 맴버는 이런식으로 어디서든 접근이 가능하다.
    */

    SoSimple sim1;
    SoSimple sim2;

    cout<<SoSimple::simObjCnt<<"번째 SoSimple 객체"<<endl;
    cout<<sim1.simObjCnt<<"번째 SoSimple 객체"<<endl;
    cout<<sim2.simObjCnt<<"번째 SoSimple 객체"<<endl;

    return 0;
}
