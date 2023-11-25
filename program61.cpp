
#include<iostream>
using namespace std;

void display(int arr[],int size)
{
    int icnt = 0;
    for(icnt = 0;icnt < size;icnt++)
    {
        cout<<arr[icnt]<<"\n";
    }
}

void display(double arr[],double size)
{
    int icnt = 0;
    for(icnt = 0;icnt < size;icnt++)
    {
        cout<<arr[icnt]<<"\n";
    }
}
int main()
{
    int a[] = {10,20,30,40,50};
    display(a,5);

    double b[] = {10.56,20.34,30.76,40.98,50.12};
    display(b,5);
    return 0;
}