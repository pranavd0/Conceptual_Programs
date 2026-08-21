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

        ~PPA()
        {
            cout<<"Inside the destructor\n";
        }

};

int main()
{
    PPA pobj1;
    PPA pobj2(11,21);

    return 0;
}

