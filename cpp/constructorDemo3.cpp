#include <iostream>
using namespace std;

class PPA
{
    public:
        int no1;
        int no2;

        
        //Default constructor
        PPA()
        {
            cout<<"INside the default constructor\n";
        }

        //Pramaterised constructor
        PPA(int a,int b)
        {
            cout<<"INside the paramaterised constructor\n";
        }

        //Copy constructor
        PPA(PPA &obj)
        {
            cout<<"inside the copy constructor\n";
        }

        ~PPA()
        {
            cout<<"Inside the destructor\n";
        }

};

int main()
{
    PPA pobj1;                       //default
    PPA pobj2(11,21);                //paramaterised
    PPA pobj3(pobj1);                //copy

    return 0;
}

