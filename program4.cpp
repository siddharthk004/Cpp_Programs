#include<iostream>
using namespace std;

class number
{
public:
    int ino1;
    int ino2;

    int maximum()
    {
        if(ino1 > ino2)
        {
            return ino1;
        }
        else
        {
            return ino2;
        }
    }
};

int main()
{
    int value1 = 0;
    int value2 = 0;
    int iret = 0;
    number nobj;

    cout<<"enter first number: "<<"\n";
    cin>>value1;
    nobj.ino1 = value1;
    
    cout<<"enter second number: "<<"\n";
    cin>>value2;
    nobj.ino2 = value2;

    iret = nobj.maximum();

    cout<<"max value is: "<<iret<<"\n";
    
    return 0;
}