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

    int sumdigit()
    {
        int idigit = 0;
        int isum = 0;
        int itemp = ino;
        while(itemp != 0)
        {
            idigit = itemp % 10;
            isum = isum + idigit;
            itemp = itemp/10;
        }
        return isum;
    }
};
int main()
{
    int ivalue = 0;
    int iret = 0;

    cout<<"enter number: "<<"\n";
    cin>>ivalue;

    digit dobj(ivalue);

    iret = dobj.sumdigit();

    cout<<"summetion of digits: "<<iret<<"\n";
    

    return 0;
}