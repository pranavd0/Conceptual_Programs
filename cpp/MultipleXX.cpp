#include<iostream>
using namespace std;

class BaseA
{
    public:
        int i,j;

        BaseA()
        {
            cout<<"inside BaseA constructor\n";
        }

        ~BaseA()
        {
            cout<<"inside BaseA destructor\n";
        }

        void fun()
        {
            cout<<"inside BaseA fun\n";
        }
};

class BaseB
{
    public:
        int x,y;

        BaseB()
        {
            cout<<"inside BaseB constructor\n";
        }

        ~BaseB()
        {
            cout<<"inside BaseB destructor\n";
        }

        void gun()
        {
            cout<<"inside BaseB gun\n";
        }
};

class Derived:public BaseB,public BaseA
{
    public:
        int a;

        Derived()
        {
            cout<<"inside Derived constructor\n";
        }

        ~Derived()
        {
            cout<<"inside Derived destructor\n";
        }

        void sun()
        {
            cout<<"inside Derived sun\n";
        }
};

int main()
{
    Derived dobj;
    dobj.fun();
    dobj.gun();
    dobj.sun();

    return 0;
}
