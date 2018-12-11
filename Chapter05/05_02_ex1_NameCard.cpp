#include<iostream>
#include<cstring>
using std::cin;
using std::cout;
using std::endl;

namespace COMP_POS
{
    enum{CLERK,SENIOR, ASSIST,MANAGER};
}

class NameCard
{
private:
    char* name;
    char* com_name;
    char* pho_num;
    int rnk;

public:
    NameCard(char* Nstr, char* Cstr, char* Pstr, int Jik)
    {
        name=new char[strlen(Nstr)+1];
        com_name=new char[strlen(Cstr)+1];
        pho_num=new char[strlen(Pstr)+1];
        strcpy(name,Nstr);
        strcpy(com_name,Cstr);
        strcpy(pho_num,Pstr);
        rnk=Jik;
    }

    NameCard(const NameCard &copy)
    {
        name=new char[strlen(copy.name)+1];
        com_name=new char[strlen(copy.com_name)+1];
        pho_num=new char[strlen(copy.pho_num)+1];
        strcpy(name,copy.name);
        strcpy(com_name,copy.com_name);
        strcpy(pho_num,copy.pho_num);
        rnk=copy.rnk;
    }

    void ShowNameCardInfo()
    {
        cout<<"이름 : "<<name<<endl;
        cout<<"회사 : "<<com_name<<endl;
        cout<<"전화번호 : "<<pho_num<<endl;

        switch(rnk)
        {
        case COMP_POS::CLERK:
            cout<<"사 원"<<endl<<endl;
            break;
        case COMP_POS::SENIOR:
            cout<<"주 임"<<endl<<endl;
            break;
        case COMP_POS::ASSIST:
            cout<<"대 리"<<endl<<endl;
            break;
        case COMP_POS::MANAGER:
            cout<<"과 장"<<endl<<endl;
            break;
        }
    }

    ~NameCard()
    {
        delete[] name;
        delete[] com_name;
        delete[] pho_num;
    }
};

int main(void)
{
    NameCard manClerk("Lee","ABCEng", "010-1111-2222",COMP_POS::CLERK);
    NameCard copy1=manClerk;
    NameCard manSENIOR("Hong", "OrangEng", "010-3333-4444", COMP_POS::SENIOR);
    NameCard copy2=manSENIOR;
    copy1.ShowNameCardInfo();
    copy2.ShowNameCardInfo();
}
