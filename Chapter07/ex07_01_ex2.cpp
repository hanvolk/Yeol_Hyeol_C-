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
        cout<<"이름 : "<<name<<endl;
        cout<<"나이 : "<<age<<endl;
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
        cout<<"주소 : "<<addr<<endl;
        cout<<"전화 : "<<phone<<endl;
    }
};

int main(void)
{
    MyFriendDetailInfo man1("kim",28,"서울시 금천구 독산동","010-123-4567");
    man1.ShowMyFriendDetailInfo();

    return 0;
}
