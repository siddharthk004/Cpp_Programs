#include<iostream>
using namespace std;

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
int main()
{
    int value1 = 0;
    int value2 = 0;
    int iret = 0;

    cout<<"enter first number: "<<"\n";
    cin>>value1;
    
    cout<<"enter second number: "<<"\n";
    cin>>value2;

    iret = maximum(value1,value2);

    cout<<"max value is: "<<iret<<"\n";
    
    return 0;
}