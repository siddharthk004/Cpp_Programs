#include<iostream>
using namespace std;
    
class digit
{
    public:
        int ino;

    digit(int x)
    {
        ino = x;
    }
};
int main()
{
    int ivalue = 0;

    cout<<"enter number: "<<"\n";
    cin>>ivalue;

    digit dobj(ivalue);

    return 0;
}