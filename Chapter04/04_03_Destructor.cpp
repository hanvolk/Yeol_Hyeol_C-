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
    Person(char* myname, int myage) // ������
    {
        int len=strlen(myname)+1; // �Է¹��� ���ڿ��� ���� len
        name=new char[len]; // �Է¹��� ���ڿ��� ����(len)��ŭ ���� �����Ҵ� �Ͽ� name�� �ʱ�ȭ
        strcpy(name,myname); // myname�� ������ name ���� ����

        age=myage;
    }

    void ShowPersonInfo() const
    {
        cout<<"�̸� : "<<name<<endl;
        cout<<"���� : "<<age<<endl;
    }

    ~Person() // �Ҹ���
    {
        delete []name; // �����ڿ��� Heap�� �����Ҵ��� �޸� ������ ����
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
