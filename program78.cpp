
// bi directional search

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

    bool BinarySearch(T);
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
bool ArrayX<T> :: BinarySearch(T ino)
{
    int istart = 0;
    int iend = 0;
    int imid = 0;
    bool flag = false;

    istart = 0;
    iend = isize-1;

    while (istart <= iend)
    {
        imid = istart + (iend - istart) / 2;
        if(Arr[imid] == ino)
        {
            flag = true;
            break;
        }
        else if(Arr[imid] < ino)
        {
            istart = imid+1;
        }
        else if(Arr[imid] > ino)
        {
            iend = imid-1;
        }
    }
    return flag;
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

int main()
{
    int ivalue = 0;
    bool bret = false;

    cout<<"enter the size of array : ";
    cin>>ivalue;

    ArrayX <int>*obj = new ArrayX<int>(ivalue);

    obj->accept();
    obj->display();

    cout<<"enter the element that you want to search\n";
    cin>>ivalue;

    bret = obj->BinarySearch(ivalue);
    if(bret == true)
    {
        cout<<ivalue<<" is present in array\n";
    }
    else
    {
        cout<<ivalue<<" is not present in the array\n";
    }
    delete obj;

    return 0;
}