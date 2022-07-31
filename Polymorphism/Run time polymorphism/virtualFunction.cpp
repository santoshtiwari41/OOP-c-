#include<iostream>
using namespace std;
class A
{
    int a;
    public:
   virtual void input(){
        cout<<"\n enter value of a";
        cin>>a;
    }
     virtual void display()
    {
        cout<<"\n a="<<a;
    }
};
class B:public A
{
    int b;
    public:
    void input(){
        cout<<"\n enter value of b";
        cin>>b;
    }
    void display()
    {
        cout<<"\n b="<<b;
    }
};
class C:public A
{
    int c;
    public:
    void input(){
        cout<<"\n enter value of c";
        cin>>c;
    }
    void display()
    {
        cout<<"\n c="<<c;
    }
};
int main()
{
    A *x,p;
    B y;
    C z;
    x=&p;
    x->input();
    x->display();
    x=&y;
    x->input();
    x->display();
    x=&z;
     x->input();
    x->display();
    return 0;
}