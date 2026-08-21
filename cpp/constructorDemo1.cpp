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

        ~PPA()
        {
            cout<<"Inside the destructor\n";
        }

};

int main()
{
    PPA pobj1;
    PPA pobj2;

    return 0;
}

