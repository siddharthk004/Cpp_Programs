#include<iostream>
using namespace std;
class pattern
{
    public:
    int irow;
    int icol;

    pattern(int x,int y)
    {
        irow = x;
        icol = y;
    }

    void display()
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
};

int main()
{
    int ino1 = 0;
    int ino2 = 0;
    

    cout<<"enter number of rows: "<<"\n";
    cin>>ino1;

    cout<<"enter number of columns: "<<"\n";
    cin>>ino2;

    pattern pobj(ino1,ino2);

    pobj.display();
    
    return 0;
}