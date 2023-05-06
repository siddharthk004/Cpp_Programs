#include<iostream>
using namespace std;

class demo
{
    public:
    int no1;
    int no2;

    void fun()
    {
        cout<<"inside fun"<<"\n";

    }
};
int main()
{
    demo obj1;
    cout<<"size of demo: "<<sizeof(obj1)<<"\n";

    obj1.fun();


    return 0;
}