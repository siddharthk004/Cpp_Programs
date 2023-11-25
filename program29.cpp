

using namespace std;
#include<iostream>

void hexadecimal(int ino)
{
    int idigit = 0;

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
            switch(idigit)
            {
                case 10:
                    cout<<"A";
                    break;
                case 11:
                    cout<<"B";
                    break;
                case 12:
                    cout<<"C";
                    break;
                case 13:
                    cout<<"D";
                    break;
                case 14:
                    cout<<"E";
                    break;
                case 15:
                    cout<<"F";
                    break;
            }
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