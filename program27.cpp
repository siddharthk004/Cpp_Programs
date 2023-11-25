

using namespace std;
#include<iostream>

void displaybinaryreslut(int ino1,int ino2)
{
    int result = 0;

    result = ino1 & ino2;
    cout<<"result of & is: "<<result<<"\n";

    result = ino1 | ino2;
    cout<<"result of | is: "<<result<<"\n";

    result = ino1 ^ ino2;
    cout<<"result of ^ is: "<<result<<"\n";

}
int main()
{
    int ivalue1 = 0,ivalue2 = 0;

    cout<<"enter first number: "<<"\n";
    cin>>ivalue1;

    cout<<"enter second number: "<<"\n";
    cin>>ivalue2;

    displaybinaryreslut(ivalue1,ivalue2);

    return 0;
}