

using namespace std;
#include<iostream>

void hexadecimal(int ino)
{
    int idigit = 0;

    cout<<"hexadecimal conversion is: "<<ino<<"is : "<<"\n";

    while(ino != 0)
    {
        idigit = ino % 16;
        cout<<idigit;
        ino = ino / 16;
    }
    cout<<"\n";
}
int main()
{
    int ivalue = 0;

    cout<<"enter number: "<<"\n";
    cin>>ivalue;

    hexadecimal(ivalue);

    return 0;
}