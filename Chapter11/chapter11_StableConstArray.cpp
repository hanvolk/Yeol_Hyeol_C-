#include<iostream>
using std::cin;
using std::cout;
using std::endl;

class uArray
{
private:
    int* arr;
    int arrlen;
    uArray(const uArray& ref){}
    void operator=(const uArray& ref){}
public:
    uArray(int len):arrlen(len)
    {
        arr=new int(len);
    }

    int& operator[](int idx) // 객체[idx]
    {
        if(idx<0 || idx>=arrlen)
        {
            cout<<"배열의 Index가 배열의 범위를 벗어 났습니다."<<endl;
            exit(1);
        }

        return arr[idx];
    }

    int operator[](int idx) const
    {
        if(idx<0 || idx>=arrlen)
        {
            cout<<"배열의 Index가 배열의 범위를 벗어 났습니다."<<endl;
            exit(1);
        }

        return arr[idx];
    }

    int GetArrLen() const{return arrlen;}
    ~uArray(){delete []arr;}

};

void ShowAllData(const uArray& ref)
{
    int len=ref.GetArrLen();
    for(int idx=0;idx<len;idx++)
    {
        cout<<ref[idx]<<endl;
    }
}

int main(void)
{
    uArray arr(5);
    for(int i=0;i<5;i++)
    {
        arr[i]=(i+1)*10;
    }

    arr[0]=100;

    ShowAllData(arr);

    return 0;
}
