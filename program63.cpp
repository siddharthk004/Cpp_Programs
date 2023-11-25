
#include<iostream>
using namespace std;

template <class T>
T Addition(T arr[],int size)
{
    int icnt = 0;
    T sum = 0;
    for(icnt = 0;icnt < size;icnt++)
    {
        sum = sum + arr[icnt];
    }
    return sum;
}
int main()
{
    int ret = 0;
    int a[] = {10,20,30,40,50};
    ret = Addition(a,5);
    cout<<"addition is : "<<ret<<"\n";

    double dret = 0.0;
    double b[] = {10.56,20.34,30.76,40.98,50.12};
    dret = Addition(b,5);
    cout<<"addition is : "<<dret<<"\n";
    return 0;
}