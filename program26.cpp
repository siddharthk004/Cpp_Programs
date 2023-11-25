

using namespace std;
#include<iostream>

void displaybinary(int ino)
{
    int idigit = 0;

    while(ino != 0)
    {
        idigit = ino % 2;
        cout<<idigit;
        ino = ino / 2;
    }
    cout<<"\n";
}
int main()
{
    int ivalue = 0;

    cout<<"enter number: "<<"\n";
    cin>>ivalue;

    displaybinary(ivalue);

    return 0;
}