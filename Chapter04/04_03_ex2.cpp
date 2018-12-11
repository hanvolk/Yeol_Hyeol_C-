#include<iostream>
#include<cstring>

using std::cin;
using std::cout;
using std::endl;

namespace COMP_POS
{
	enum {CLERK, SENIOR, ASSIST, MANAGER};
}

class NameCard
{
private:
	char* name; // 성명
	char* com_name; // 회사이름
	char* pho_num; // 전화번호
	int rnk; //직급
public:
	NameCard(char* Nstr, char* Cstr, char* Pstr, int Jik);
	void ShowNameCardInfo();
	~NameCard()
	{
	    delete []name;
	    delete []com_name;
	    delete []pho_num;
	}

};

NameCard::NameCard(char* Nstr, char* Cstr, char* Pstr, int Jik)
{
	name = new char[strlen(Nstr) + 1];
	com_name = new char[strlen(Cstr) + 1];
	pho_num = new char[strlen(Pstr) + 1];
	strcpy(name, Nstr);
	strcpy(com_name, Cstr);
	strcpy(pho_num, Pstr);
 	rnk = Jik;
}

void NameCard::ShowNameCardInfo()
{
	cout << "이름 :  " << name << endl;
	cout << "회사 : " << com_name << endl;
	cout << "전화번호 : " << pho_num << endl;
	cout << "직급 : ";
	switch(rnk)
	{
    case COMP_POS::CLERK:
        cout<<"사원"<<endl<<endl;
        break;
    case COMP_POS::SENIOR:
        cout<<"주임"<<endl<<endl;
        break;
    case COMP_POS::ASSIST:
        cout<<"대리"<<endl<<endl;
        break;
    case COMP_POS::MANAGER:
        cout<<"과장"<<endl<<endl;
        break;
	}
}

int main(void)
{
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);
	manClerk.ShowNameCardInfo();
	manSENIOR.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();
}
