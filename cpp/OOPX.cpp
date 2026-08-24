#include<iostream>
using namespace std;

class Arithmetic
{
    public:
        int no1;
        int no2;
        
        Arithmetic()
        {
            no1=0;
            no2=0;
        }

        Arithmetic(int i,int j)
        {
            no1=i;
            no2=j;
        }

        int Addition()
        {
            int Ans=0;
            Ans=no1+no2;
            return Ans;
        }
};

int main()
{
    Arithmetic aobj1(10,11);

    int result=0;

    result=aobj1.Addition();

    cout<<"addition is:"<<result<<"\n";
    
    return 0;
}