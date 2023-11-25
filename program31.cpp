#include<iostream>
using namespace std;

bool chkbit(int ino)
{
    int imask = 4;
    int iresult = 0;

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
    int ivalue = 0;
    bool bret = false;

    cout<< "enter number: "<<"\n";
    cin>>ivalue;
    
    bret = chkbit(ivalue);
    
    if(bret == true)
    {
        cout<<"3rd bit is ON"<<"\n";
    }
    else
    {
        cout<<"3rd bit is OFF"<<"\n";
    }

    return 0;
}