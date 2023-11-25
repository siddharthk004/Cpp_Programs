#include<iostream>
using namespace std;

class array1
{
    private:
        int isize;
        int *arr;
    public:
        array1(int ino)
        {
            cout<<"inside constructor"<<"\n";
            isize = ino;
            arr = new int[isize];
        }
        ~array1()
        {
            cout<<"inside destructor"<<"\n";
            delete []arr;
        }
        void accept()
        {
            cout<<"inside accept method"<<"\n";
            cout<<"enter the elements: "<<"\n";

            int icnt = 0;
            for(icnt = 1;icnt <= isize;icnt++)
            {
                cin>>arr[icnt];
            }
        }
        
        void display()
        {
            
            cout<<"inside display"<<"\n";
            cout<<"elements of the array are: "<<"\n";

            int icnt = 0;
            for(icnt = 1;icnt <= isize;icnt++)
            {
                cout<<arr[icnt]<<"\n";
            }
        }
        int summation()
        {
            cout<<"inside summetion"<<"\n";
            int isum = 0;
            int icnt = 0;
            for(icnt = 0;icnt < isize;icnt++)
            {
                isum = isum + arr[icnt];
            }
            return isum;
        }
};
int main()
{
    int ino = 0;
    int iret = 0;

    cout<<"enter number of elements: "<<"\n";
    cin>>ino;

    array1 aobj(ino);
    aobj.accept();
    aobj.display();

    iret = aobj.summation();

   cout<<"\n"<<iret<<"\n";

    return 0;
}