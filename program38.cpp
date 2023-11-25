#include<iostream>
using namespace std;
typedef unsigned int UNIT;

bool chkbit(UNIT ino)
{
    UNIT imask = 0x108;
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
        cout<<"4th and 9th bit are ON"<<"\n";
    }
    else
    {
        cout<<"4th and 9th bit is OFF"<<"\n";
    }

    return 0;
}