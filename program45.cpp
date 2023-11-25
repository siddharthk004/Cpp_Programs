#include<iostream>
using namespace std;
typedef unsigned int UNIT;

UNIT togglebit(UNIT ino)
{
    UNIT imask = 0x00000040;
    return (ino ^ imask);
}

int main()
{
    UNIT ivalue = 0;
    UNIT bret = 0;

    cout << "enter number: "<<"\n";
    cin>>ivalue;

    bret = togglebit(ivalue);

    cout<<"result is: "<<bret<<"\n";
    return 0;
}