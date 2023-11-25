#include<iostream>
using namespace std;

void display(int ino)
{
    int icnt = 0;
    for(icnt=1;icnt<=ino;icnt++)
    {
        cout<<"jay ganesh..."<<"\n";
    } 

}


int main()
{
    int ivalue = 0;

    cout<<"\n enter the number to print the jay ganesh statement: ";
    cin>>ivalue;

    display(ivalue);

    return 0;
}