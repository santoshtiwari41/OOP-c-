#include<iostream>
using namespace std;
class complex 
{
private:
int real ,img;
public:
void input()
{
    cout<<"\n enter real and imagianary part ";
    cin>>real>>img;
}
void display()
{
    cout<<"\n "<<real<<" + "<<img<<" i";
}
 friend void sum(complex ,complex );

};
void sum(complex c1,complex c2)
{
     int real=c1.real+c2.real;
    int img=c1.img+c2.img;
    cout<<" \n sum is \n  "<<real<<"+"<<img<<"i \n ";
}
int main()
{
    complex c ,d;
    cout<<"\n for first complex number\n ";
    c.input();
    c.display();
    cout<<"\n for second complex number \n";
    d.input();
    d.display();
    sum(c,d);
   
    return 0;

}