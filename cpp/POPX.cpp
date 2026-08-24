#include<iostream>
using namespace std;

int Addition(int no1,int no2)
{
    int Ans=0;
    Ans=no1+no2;
    return Ans;
}

int main(){

    int value1=0, value2=0,result=0;

    cout<<"Enter first number:\n";
    cin>>value1;

    cout<<"Enter second number:\n";
    cin>>value2;

    result=Addition(value1,value2);

    cout<<"Answer is:"<<result<<"\n";

    return 0;
}