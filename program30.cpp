
using namespace std;
#include<iostream>

void hexadecimal(int ino)
{
    int idigit = 0;
    char arr[]={'A','B','C','D','E','F'};

    cout<<"hexadecimal conversion is: "<<ino<<"is : "<<"\n";

    while(ino != 0)
    {
        idigit = ino % 16;
        if(idigit <= 9)
        {
            cout<<idigit;
        }
        else
        {
            cout<<arr[idigit - 10];
        }
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