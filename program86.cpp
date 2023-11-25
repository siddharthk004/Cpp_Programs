
// Bubble sort

#include<iostream>
using namespace std;

template <class T>
class ArrayX
{
    public:
    T *Arr;
    int isize;

    ArrayX(int);
    ~ArrayX();
    void accept();
    void display();
    void InsertionSort();
};

template <class T>
ArrayX<T> :: ArrayX(int ino)
{
    this->isize = ino;
    this->Arr = new T[isize];
}

template <class T>
ArrayX<T> :: ~ArrayX()
{
    delete []Arr;
}

template <class T>
void ArrayX<T> :: accept()
{
    cout<<"Enter the elements : \n";
    for(int icnt = 0;icnt < isize;icnt++)
    {
        cin>>Arr[icnt];
    }
}

template <class T>
void ArrayX<T> :: display()
{
    cout<<"Elements of array are : \n";
    for(int icnt = 0;icnt < isize;icnt++)
    {
        cout<<Arr[icnt]<<"\t";
    }
    cout<<"\n";
}

template <class T>
void ArrayX<T> :: InsertionSort()
{
    int i = 0,j = 0;
    T selected = 0;

    for(i=1;i<isize;i++)
    {
        for(j = i-1,selected = Arr[i];((j >= 0) && (Arr[j] > selected));j--)
        {
            Arr[j+1] = Arr[j];
        }
        Arr[j+1] = selected;
    }
}

int main()
{
    int ivalue = 0;

    cout<<"enter the size of array : "; 
    cin>>ivalue;

    ArrayX <int>*obj = new ArrayX<int>(ivalue);

    obj->accept();
    obj->display();

    obj->InsertionSort();

    cout<<"data after sorting is: \n";
    obj->display();

    delete obj;

    return 0;
}