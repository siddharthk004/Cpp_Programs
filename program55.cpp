
#include<iostream>
using namespace std;

void swap(int &no1,int &no2)
{
    int temp;
    temp = no1;
    no1 = no2;
    no2 = temp;
}

int main()
{
    int a = 10,b = 11;
    cout<<"data before swapping: "<<"\n";
    cout<<"value of a : "<<a<<"\n";
    cout<<"value of b : "<<b<<"\n";
    swap(a,b);
    cout<<"data after swapping: "<<"\n";
    cout<<"value of a : "<<a<<"\n";
    cout<<"value of b : "<<b<<"\n";
       
    return 0;
}