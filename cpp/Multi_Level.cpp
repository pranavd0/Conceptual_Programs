#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;

        Base()
        {
            cout<<"inside Base constructor\n";
        }

        void fun()
        {
            cout<<"inside Base fun \n";
        }

        void gun()
        {
            cout<<"inside Base gun\n";
        }

        ~Base()
        {
            cout<<"inside Base destructor\n";
        }
};

class Derived: public Base
{
    public:
        int x,y;

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

class DerivedX:public Derived
{
    public:
        int a;

        DerivedX()
        {
            cout<<"inside DerivedX constructor\n";
        }

        ~DerivedX()
        {
            cout<<"inside DerivedX destructor\n";
        }

        void run()
        {
            cout<<"inside DerivedX run\n";
        }
};

int main()
{
    DerivedX dobj;

    dobj.fun();
    dobj.gun();
    dobj.sun();
    dobj.run();
    
    return 0;
}