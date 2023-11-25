
#include<iostream>
using namespace std;

int Addition(int no1,int no2)
{
    int ans  = 0;
    ans = no1 + no2;
    return ans;
}

int main()
{
    int a = 10,b = 11, ret = 0;
    ret = Addition(a,b);
    cout<<"addition is : "<<ret<<"\n";
    
    return 0;
}