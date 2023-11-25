
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
    void BubbleSort();
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
void ArrayX<T> :: BubbleSort()
{
    T temp;
    int i = 0,j = 0;
    for(i = 0;i < isize;i++)
    {
        for(j = 0;j < isize-i-1;j++)
        {
            if(Arr[j] > Arr[j+1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;
            }
        }
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

    obj->BubbleSort();

    cout<<"data after sorting is: \n";
    obj->display();

    delete obj;

    return 0;
}