
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
int main()
{
    int a[] = {10,20,30,40,50};

    display(a,5);
    return 0;
}