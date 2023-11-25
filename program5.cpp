#include<iostream>
using namespace std;

class number
{
public:
    int ino1;
    int ino2;

    void accept()
    {
        cout<<"enter first number: "<<"\n";
        cin>>ino1;

        cout<<"enter second number: "<<"\n";
        cin>>ino2;
                
    }
 
    int maximum()
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
};

int main()
{
    int iret = 0;
    number nobj;
    
    nobj.accept();

    iret = nobj.maximum();

    cout<<"max value is: "<<iret<<"\n";
    
    return 0;
}