#include<iostream>
using namespace std;
//parent class
class demo
{
    public:
       int a,b;

       demo()
       {
        cout<<"inside demo constructor"<<"\n";

       }
       void fun()
       {
        cout<<"inside fun of demo"<<"\n";
       }
};
//child class
class hello:public demo
{
    public:
    int x,y;

    hello()
    {
        cout<<"inside hello constructor"<<"\n";
    }
    void gun()
    {
        cout<<"inside gun of hello"<<"\n";
    }

};

int main()
{
    hello hobj;

    return 0;
}