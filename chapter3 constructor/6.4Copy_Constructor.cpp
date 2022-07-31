#include<iostream>
using namespace std;
class complex 
{
    int real,img;
    public:
    complex()
    {

    }
    complex(int x,int y)
    {
        real=x;
        img=y;
    }
    void display()
    {
        cout<<"\n"<<real<<"+"<<img<<"i \n";
    }
    complex(complex &c)
    {
        real=c.real;
        img=c.img;
    }
};
int main()
{
    complex c1(2,3);
    complex c2(c1) ;// Default copy constructor
    complex c3=c2; // parametrised copy constructor 
    
    cout<<"\n  first copy constructor is called";
    c1.display();

     cout<<"\n  second copy constructor is called";
    c2.display();

     cout<<"\n  third copy constructor is called";
    c3.display();
    return 0;

}