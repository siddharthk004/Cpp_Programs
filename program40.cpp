#include<iostream>
using namespace std;
typedef unsigned int UNIT;

bool chkbit(UNIT ino,UNIT ipos)
{
    UNIT imask = 0x00102040;
    UNIT iresult = 0;

    if((ipos < 1) || (ipos > 32))
    {
        cout<<"invalid position"<<"\n";
        return false;
    }

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
    UNIT ibit = 0;
    bool bret = false;

    cout << "enter number: "<<"\n";
    cin>>ivalue;

    cout<<"enter the bit position: (range should be 1 to 50): "<<"\n";
    cin>>ibit;
    
    bret = chkbit(ivalue,ibit);
    
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