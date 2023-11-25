
#include<iostream>
using namespace std;

template <class T>
T Maximum(T arr[],int size)
{
    int icnt = 0;
    T max = arr[0];
    for(icnt = 0;icnt < size;icnt++)
    {
        if(arr[icnt] > max)
        {
            max = arr[icnt];
        }
    }
    return max;
}
int main()
{
    int ret = 0;
    int a[] = {10,20,30,40,50};
    ret = Maximum(a,5);
    cout<<"Maximum number is : "<<ret<<"\n";

    double dret = 0.0;
    double b[] = {10.56,20.34,30.76,40.98,50.12};
    dret = Maximum(b,5);
    cout<<"Maximum number is : "<<dret<<"\n";
    return 0;
}