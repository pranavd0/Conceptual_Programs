#include<iostream>
using namespace std;

#pragma pack(1)
class Base
{
    public:
        int i,j;

        void fun()
        {   cout<<"base fun\n";    }

        void gun()
        {   cout<<"base gun\n";    }

        virtual void sun()
        {   cout<<"base sun\n";    }

        virtual void run()
        {   cout<<"base run\n";    }    
};//16 bytes

#pragma pack(1)
class Derived:public Base
{
    public:
        int x;

        void fun()
        {   cout<<"Derived fun\n";    }

        void sun()
        {   cout<<"Derived sun\n";    }

        virtual void mun()
        {   cout<<"Derived mun\n";    }

        void bun()
        {   cout<<"Derived bun\n";    }    
};//20 bytes

int main()
{
    Base *bp=new Derived();

    bp->fun();
    bp->gun();
    bp->sun();
    bp->run();
    bp->mun();  //error
    bp->bun();  //error
    return 0;
}