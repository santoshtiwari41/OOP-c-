#include<iostream>
using namespace std;
class complex 
{
    int real,img;
    public:
    void input()
    {
        cout<<"\n enter the real and imaginary part \n";
        cin>>real>>img;
    }
    void display()
    {
        cout<<"\n "<<real<<"+"<<img<<"i \n";
    }
    void sum(complex c1,complex c2)
    {
       real=c1.real+c2.real;
       img=c2.img+c2.img;
    }
};
int main()
{
    complex a,b,c;
    cout<<"enter first complex number";
    a.input();
    cout<<"enter second complex number";
    b.input();
    a.display();
    b.display();
    cout<<"\n sum is ";
    c.sum(a,b);
    c.display();
    return 0;
}