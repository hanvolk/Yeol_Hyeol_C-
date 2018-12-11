#include<iostream>
#include<cstring>
using std::cin;
using std::cout;
using std::endl;

class Book
{
private:
    char* title;
    char* isbn;
    int price;
public:
    Book(const char* title,const char* isbn,const int money):price(money)  // ������
    {
        //cout<<"== Book Ŭ������ �Ϲ� ������ ȣ�� =="<<endl;
        this->title=new char[strlen(title)];
        this->isbn=new char[strlen(isbn)];
        strcpy(this->title,title);
        strcpy(this->isbn,isbn);
    }
    Book(const Book& cpy):price(cpy.price) // ���� ������(���� ����)
    {
        cout<<"== Book Ŭ������ ���� ������ ȣ�� =="<<endl;
        title=new char[strlen(cpy.title)+1];
        isbn= new char[strlen(cpy.isbn)+1];
        strcpy(title,cpy.title);
        strcpy(isbn,cpy.isbn);
    }
    Book& operator=(const Book& ref) // ���Կ����� �����ε�
    {
        cout<<"== Book Ŭ������ ���� ������ ȣ�� =="<<endl;
        delete []title;
        delete []isbn;
        title=new char[strlen(ref.title)+1];
        isbn= new char[strlen(ref.isbn)+1];
        strcpy(title,ref.title);
        strcpy(isbn,ref.isbn);
        price=ref.price;

        return *this;
    }
    void ShowBookInfo(void)
    {
        cout<<"�� �� : "<<this->title<<endl;
        cout<<"ISBN : "<<this->isbn<<endl;
        cout<<"�� �� : "<<this->price<<endl;
    }
};

class EBook:public Book
{
private:
    char* DRMKey;
public:
    EBook(const char* title,const char* isbn,const int money,const char* DRM):Book(title, isbn, money) // ������
    {
        //cout<<"== EBook Ŭ������ �Ϲ� ������ ȣ�� =="<<endl;
        DRMKey=new char[strlen(DRM)];
        strcpy(DRMKey,DRM);
    }

    EBook(const EBook& cpy):Book(cpy) //���� ������(��������)
    {
        cout<<"== EBook Ŭ������ ���� ������ ȣ�� =="<<endl;
        DRMKey=new char[strlen(cpy.DRMKey)+1];
        strcpy(DRMKey,cpy.DRMKey);
    }

    EBook& operator=(const EBook& ref) // ���Կ����� �����ε�
    {
        cout<<"== EBook Ŭ������ ���Կ����� ȣ�� =="<<endl;
     //   Book::operator=(ref); // ���� Ŭ������ ���Կ����� ȣ��
        DRMKey=new char[strlen(ref.DRMKey)+1];
        strcpy(DRMKey,ref.DRMKey);
        return *this;

    }

    void ShowEBookInfo(void)
    {
        ShowBookInfo();
        cout<<"����Ű : "<<DRMKey<<endl;
    }
};

/*
int main(void)
{
    Book book1("���� C++","555-12345-890-0",20000);
    Book book2("JavaScript jQuery","123-4567-010-0",35000);
    book1.ShowBookInfo();
    cout<<endl;
    book2.ShowBookInfo();
    cout<<endl<<"====================================="<<endl<<endl;

    book2=book1;

    book1.ShowBookInfo();
    cout<<endl;
    book2.ShowBookInfo();
    cout<<endl<<"====================================="<<endl<<endl;

    Book book3=book2;

    book1.ShowBookInfo();
    cout<<endl;
    book2.ShowBookInfo();
    cout<<endl;
    book3.ShowBookInfo();
    cout<<endl;
    cout<<endl<<"====================================="<<endl<<endl;


}
*/
int main(void)
{
    EBook ebook1("���� C++","555-12345-890-1",10000,"fdx9w0i8kiw");
    EBook ebook2("JavaScript jQuery","123-4567-010-0",15000,"edk7w0i7kiw");
    ebook1.ShowEBookInfo();
    cout<<endl;
    ebook2.ShowEBookInfo();
/*
    cout<<endl;

    cout<<"    ebook2=ebook1;"<<endl;
    ebook2=ebook1;

    ebook1.ShowEBookInfo();
    cout<<endl;
    ebook2.ShowEBookInfo();
    cout<<endl;

    cout<<"    EBook ebook3=ebook2;"<<endl;
    EBook ebook3=ebook2;
    ebook3.ShowBookInfo();
*/
    Book book1=ebook1;
    book1.ShowBookInfo();
    ebook2.ShowBookInfo();


    return 0;

}
