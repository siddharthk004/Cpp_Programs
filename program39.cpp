#include<iostream>
using namespace std;
typedef unsigned int UNIT;

bool chkbit(UNIT ino)
{
    UNIT imask = 0x00102040;
    UNIT iresult = 0;

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
    bool bret = false;

    cout << "enter number: "<<"\n";
    cin>>ivalue;
    
    bret = chkbit(ivalue);
    
    if(bret == true)
    {
        cout<<"7,14,21 bit are ON"<<"\n";
    }
    else
    {
        cout<<"7,14,21 and 9th bit is OFF"<<"\n";
    }

    return 0;
}