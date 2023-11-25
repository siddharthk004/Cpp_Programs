#include<iostream>
using namespace std;
typedef unsigned int UNIT;

bool chkbit(UNIT ino,UNIT ipos1,UNIT ipos2)
{
    UNIT imask1 = 0x00000001;
    UNIT imask2 = 0x00000001;

    UNIT imask = 0x00000000;

    UNIT iresult = 0;

    if((ipos1 < 1) || (ipos1 > 32) || (ipos2 < 1) || (ipos2 > 32)) 
    {
        cout<<"invalid position"<<"\n";
        return false;
    }

    imask1 = imask1 << (ipos1 - 1);
    imask2 = imask2 << (ipos2 - 1); 

    imask = imask1 | imask2;

    iresult = ino & imask;   
    if(iresult == imask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    UNIT ivalue = 0;
    UNIT ibit1 = 0;
    UNIT ibit2 = 0;
    bool bret = false;

    cout << "enter number: "<<"\n";
    cin>>ivalue;

    cout<<"enter the first bit position: (range should be 1 to 32): "<<"\n";
    cin>>ibit1;

    cout<<"enter the second bit position: (range should be 1 to 32): "<<"\n";
    cin>>ibit2;

    bret = chkbit(ivalue,ibit1,ibit2);
    
    if(bret == true)
    {
        cout<<"bit are ON"<<"\n";
    }
    else
    {
        cout<<"bit is OFF"<<"\n";
    }
    return 0;
}