#include<iostream>
#include<cstring>
using std::cin;
using std::cout;
using std::endl;

class MyFriendInfo
{
private:
    char* name;
    int age;
public:
    MyFriendInfo(char* name,int age):age(age)
    {
        this->name = new char[strlen(name)+1];
        strcpy(this->name,name);
    }
    void ShowMyFriendInfo()
    {
        cout<<"�̸� : "<<name<<endl;
        cout<<"���� : "<<age<<endl;
    }
};

class MyFriendDetailInfo:public MyFriendInfo
{
private:
    char* addr;
    char* phone;
public:
    MyFriendDetailInfo(char* name,int age,char* addr, char* phone)
        :MyFriendInfo(name,age)
    {
        this->addr=new char[strlen(addr)+1];
        this->phone=new char[strlen(phone)+1];
        strcpy(this->addr,addr);
        strcpy(this->phone,phone);
    }
    void ShowMyFriendDetailInfo()
    {
        ShowMyFriendInfo();
        cout<<"�ּ� : "<<addr<<endl;
        cout<<"��ȭ : "<<phone<<endl;
    }
};

int main(void)
{
    MyFriendDetailInfo man1("kim",28,"����� ��õ�� ���굿","010-123-4567");
    man1.ShowMyFriendDetailInfo();

    return 0;
}
