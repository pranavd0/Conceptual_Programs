#include<iostream>
using namespace std;

class Arithmetic
{
    public:
        int no1;
        int no2;
        
        Arithmetic()
        {
            this->no1=0;
            this->no2=0;
        }

        Arithmetic(int i,int j)
        {
            this->no1=i;
            this->no2=j;
        }

        //int Addition(arithematic *this)
        int Addition()
        {
            int Ans=0;
            Ans=this->no1+this->no2;
            return Ans;
        }

        //int Subtraction(arithematic *this)
        int Subtraction()
        {
            int Ans=0;
            Ans=this->no1-this->no2;
            return Ans;
        }
};

int main()
{
    Arithmetic aobj1(21,10);

    int result=0;

    //result=Addition(&aobj1);
    result=aobj1.Addition();

    cout<<"addition is:"<<result<<"\n";

    //result=Subtraction(&aobj1);
    result=aobj1.Subtraction();

    cout<<"subtraction is:"<<result<<"\n";

    return 0;
}