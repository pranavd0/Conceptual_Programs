#include<iostream>
using namespace std;

namespace Marvellous
{
    int i = 11;

    void display()
    {
        cout<<"Inside Display of Marvellous\n";
    }
}

namespace PPA
{
    int i = 21;

    void display()
    {
        cout<<"Inside Display of PPA\n";
    }
}

int main()
{
    Marvellous::display();
    PPA::display();

    return 0;
}