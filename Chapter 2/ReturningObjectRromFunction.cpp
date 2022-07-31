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
    complex sum(complex c1,complex c2)
    {
        complex temp;
       temp.real=c1.real+c2.real;
      temp.img=c1.img+c2.img;
      return temp;
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
    c=c.sum(a,b);
   c.display();
    return 0;
}