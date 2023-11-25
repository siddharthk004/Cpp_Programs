
#include<iostream>
using namespace std;

template <class T>
T Minimum(T arr[],int size)
{
    int icnt = 0;
    T min = 999;
    for(icnt = 0;icnt < size;icnt++)
    {
        if(arr[icnt] < min)
        {
            min = arr[icnt];
        }
    }
    return min;
}
int main()
{
    int ret = 0;
    int a[] = {10,20,30,40,50};
    ret = Minimum(a,5);
    cout<<"Minimum number is : "<<ret<<"\n";

    double dret = 0.0;
    double b[] = {10.56,20.34,30.76,40.98,50.12};
    dret = Minimum(b,5);
    cout<<"Minimum number is : "<<dret<<"\n";
    return 0;
}