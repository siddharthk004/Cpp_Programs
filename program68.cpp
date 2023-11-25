
#include<iostream>
using namespace std;

template <class T>
class arrayx
{
    public:
    T *arr;
    int size;

    arrayx(int);  
    void accept();
    void display();
    
};


template <class T>
arrayx<T>::arrayx(int length)
{
    size = length;
    arr = new int[size];
}

template <class T>
void arrayx<T>::accept()
{
    cout<<"enter the elements of array : \n";
    int icnt = 0;
    for(icnt = 0;icnt < size; icnt++)
    {
        cin>>arr[icnt];
    }
}

template <class T>
void arrayx<T>::display()
{
    cout<<"elements of array are : \n";
    int icnt = 0;
    for(icnt = 0;icnt < size;icnt++)
    {
        cout<<arr[icnt]<<"\n";
    }
}

int main()
{
    arrayx<int> obj(5);
    obj.accept();
    obj.display();

    return 0;
}