#include<iostream>
using namespace std;
    
class digit
{
    private:
        int ino;

    public:
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