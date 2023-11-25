#include<iostream>
using namespace std;

class number
{
public:
    int ino1;
    int ino2;

    number(int x,int y)
    {
        ino1  = x;
        ino2  = y;
    }
 
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
    int ivalue1 = 0;
    int ivalue2 = 0;
    int iret = 0;

    cout<<"enter first number: "<<"\n";
    cin>>ivalue1;

    cout<<"enter second number: "<<"\n";
    cin>>ivalue2;
         
    number nobj(ivalue1,ivalue2);
    iret = nobj.maximum();

    cout<<"max value is: "<<iret<<"\n";
    return 0;
}