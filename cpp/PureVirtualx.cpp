#include <iostream>
using namespace std;

#pragma pack(1)
class Base
{
    public:
        int i,j;

        int addition(int no1,int no2)               //1000
        {
            return no1+no2;
        }

        virtual int Subtraction(int no1,int no2)=0; //----
};

#pragma pack(1)
class Derived:public Base
{
    public:
        int x;

        int Subtraction(int no1,int no2)            //2000
        {
            return no1-no2;
        }

        int Multiplication(int no1,int no2)         //3000
        {
            return no1*no2;
        }
};

int main()
{
    cout<<"sizeof base class is:"<<sizeof(Base)<<"\n";
    cout<<"sizeof Derived class is:"<<sizeof(Derived)<<"\n";

    Derived dobj;
    int ret=0;

    ret=dobj.addition(11,10);
    cout<<"Addition is:"<<ret<<"\n";

    ret=dobj.Subtraction(11,10);
    cout<<"Subtraction is:"<<ret<<"\n";

    ret=dobj.Multiplication(11,10);
    cout<<"Multiplication is:"<<ret<<"\n";

    return 0;
}