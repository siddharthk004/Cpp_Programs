
#include<iostream>
using namespace std;

class arrayx
{
    public:
    int *arr;
    int size;

    arrayx(int length)
    {
        size = length;
        arr = new int[size];
    }
    void accept()
    {
        cout<<"enter the elements of array : \n";
        int icnt = 0;
        for(icnt = 0;icnt < size; icnt++)
        {
            cin>>arr[icnt];
        }
    }
    void display()
    {
        cout<<"elements of array are : \n";
        int icnt = 0;
        for(icnt = 0;icnt < size;icnt++)
        {
            cout<<arr[icnt]<<"\n";
        }
    }
};
int main()
{
    arrayx obj(5);
    obj.accept();
    obj.display();

    return 0;
}