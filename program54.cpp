
#include<iostream>
using namespace std;

template <class T>
T Addition(T no1,T no2)
{
    T ans;
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
    
    float l = 90.7f, M = 78.9f,resultf = 0.0f;
    resultf = Addition(l,M);
    cout<<"addition of float is : "<<resultf<<"\n";
    
    return 0;
}