
#include<iostream>
using namespace std;

class ArrayX
{
    public:
    int *Arr;
    int isize;

    ArrayX(int);
    ~ArrayX();
    void accept();
    void display();
};

ArrayX :: ArrayX(int ino)
{
    this->isize = ino;
    this->Arr = new int[isize];
}

ArrayX :: ~ArrayX()
{
    delete []Arr;
}

void ArrayX :: accept()
{
    cout<<"Enter the elements : \n";
    for(int icnt = 0;icnt < isize;icnt++)
    {
        cin>>Arr[icnt];
    }
}

void ArrayX :: display()
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
    cout<<"enter the size of array : ";
    cin>>ivalue;

    ArrayX *obj = new ArrayX(ivalue);

    obj->accept();
    obj->display();

    return 0;
}