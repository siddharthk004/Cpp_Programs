#include<iostream>
using namespace std;

void display(int irow,int icol)
{
    int i = 0;
    int j = 0;

    for(i=1;i<=irow;i++)
    {
        for(j=1;j<=icol;j++)
        {
            cout<<"*"<<"\t";
        }
        cout<<"\n";
    }
}

int main()
{
    int ino1 = 0;
    int ino2 = 0;

    cout<<"enter number of rows: "<<"\n";
    cin>>ino1;

    cout<<"enter number of columns: "<<"\n";
    cin>>ino2;

    display(ino1,ino2);
    
    return 0;
}