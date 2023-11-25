#include<iostream>
using namespace std;
typedef unsigned int UNIT;

UNIT togglebit(UNIT ino,UNIT ipos)
{
    UNIT imask = 0x00000040;
    UNIT iresult = 0;

    imask = imask << (ipos - 1);

    iresult = ino ^ imask;

    return iresult;
}

int main()
{
    UNIT ivalue = 0;
    UNIT bret = 0;
    UNIT ibit = 0;
    

    cout << "enter number: "<<"\n";
    cin>>ivalue;
    cout << "enter the position: "<<"\n";
    cin>>ibit;

    bret = togglebit(ivalue,ibit);

    cout<<"result is: "<<bret<<"\n";
    return 0;
}