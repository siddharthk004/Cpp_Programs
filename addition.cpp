#include<iostream>
using namespace std;

class demo
{
    public:
      int no1=0;
      int no2=0;

      void add(int a,int b)
      {
          int ans=0;
           
          ans=a+b;
          cout<<"addition of 2 integer: "<<ans<<"\n"; 
      }

      

};
int main()
{
    demo obj;
    obj.add(12,23);

    return 0;

}