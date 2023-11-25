
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
    T maximum();
    
};


template <class T>
arrayx<T>::arrayx(int length)
{
    size = length;
    arr = new T[size];
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
T arrayx<T>::maximum()
{
    cout<<"max element are : \n";
    int icnt = 0;
    T max = arr[0];
    for(icnt = 0;icnt < size;icnt++)
    {
        if(max < arr[icnt])
        {
            max  = arr[icnt];
        }
    }
    return max;
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
    int ret1;
    arrayx<int> obj(5);
    obj.accept();
    ret1 = obj.maximum();
    cout<<"max value is : "<<ret1<<"\n";
    obj.display();

    double ret2;
    arrayx<double> obj1(5);
    obj1.accept();
    ret2 = obj1.maximum();
    cout<<"max value is : "<<ret2<<"\n";
    obj1.display();
    
    float ret3;
    arrayx<float> obj2(5);
    obj2.accept();
    ret3 = obj2.maximum();
    cout<<"max value is : "<<ret3<<"\n";
    obj2.display();

    return 0;
}