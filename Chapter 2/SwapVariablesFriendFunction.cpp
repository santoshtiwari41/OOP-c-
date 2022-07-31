// swap two variables of two class using friend function
#include<iostream>
using namespace std;
class B ;// forward declaration
class A
{
    int a;
    public:
    void input()
    {
        cout<<"\n enter the value of a \n";
        cin>>a;
    }
    void display()
    {
        cout<<"\n a= "<<a;
    }
    friend void swap(A &,B &);// pasing referance
};
class B
{
    int b;
    public:
    void input()
    {
        cout<<"\n enter the value of b \n";
        cin>>b;
    }
    void display()
    {
        cout<<"\n b="<<b;
    }
    friend void swap(A &,B &);// pasing referance
};
void swap(A &x,B &y)
{
int temp;
temp=x.a;
x.a=y.b;
y.b=temp;
}
int main()
{
    A m;
    B n;
    m.input();
    n.input();
    cout<<"\n value of and b before swap \n";
    m.display();
    n.display();
    swap(m,n);
    cout<<"\n value of and b after swap \n";
    m.display();
    n.display();
    return 0;
}