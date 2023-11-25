
#include<iostream>
using namespace std;

int Addition(int no1,int no2)
{
    int ans  = 0;
    ans = no1 + no2;
    return ans;
}

double Addition(double no1,double no2)
{
    double ans  = 0;
    ans = no1 + no2;
    return ans;
}

int main()
{
    int a = 10,b = 11, ret = 0;
    ret = Addition(a,b);
    cout<<"addition is : "<<ret<<"\n";

    double x = 90.7, y = 78.9,result = 0.0;
    result = Addition(x,y);
    cout<<"addition of double is : "<<result<<"\n";
    
    return 0;
}