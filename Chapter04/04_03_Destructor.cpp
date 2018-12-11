#include<iostream>
#include<cstring>
using std::cin;
using std::cout;
using std::endl;


class Person
{
private:
    char* name;
    int age;
public:
    Person(char* myname, int myage) // 생성자
    {
        int len=strlen(myname)+1; // 입력받은 문자열의 길이 len
        name=new char[len]; // 입력받은 문자열의 길이(len)만큼 힙에 동적할당 하여 name을 초기화
        strcpy(name,myname); // myname의 내용을 name 으로 복사

        age=myage;
    }

    void ShowPersonInfo() const
    {
        cout<<"이름 : "<<name<<endl;
        cout<<"나이 : "<<age<<endl;
    }

    ~Person() // 소멸자
    {
        delete []name; // 생성자에서 Heap에 동적할당한 메모리 공간의 해제
        cout<<"called destructor!"<<endl;
    }

};

int main(void)
{
    Person man1("Lee dong woo", 29);
    Person man2("Jang dong gun", 41);
    man1.ShowPersonInfo();
    man2.ShowPersonInfo();

    return 0;
}
