#include<iostream>
using namespace std;

class number
{
public:
    int maximum(int ino1,int ino2)
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
    
    cout<<"enter second number: "<<"\n";
    cin>>value2;

    iret = nobj.maximum(value1,value2);

    cout<<"max value is: "<<iret<<"\n";
    
    return 0;
}