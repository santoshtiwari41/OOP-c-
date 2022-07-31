#include<iostream>
#include<math.h>
using namespace std;
class rectangle
{
    int x,y;

    public:
    rectangle()
    {

    }
    rectangle(int a,int b)
    {
        x=a;
        y=b;
    }
    void display()
    {
        cout<<"\n X="<<x<<"\t Y="<<y;
    }
    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }

};
class polar
{
    float r, t;
    public:
    polar()
    {

    }
    polar(float m,float n)
    {
      r=m;
      t=n;
    }
    void display()
    {
        cout<<"\n r="<<r<<"\t thita="<<t<<endl;
    }
     polar(rectangle q)
     {
         int xco=q.getx();
         int yco=q.gety();
         r=sqrt(xco*xco+yco*yco);
         t=atan(yco/xco);

     }
};
int main()
{
    rectangle c(3,4);
    polar d;
    cout<<"\n before conversion\n ";
    c.display();
    cout<<"\n after conversion\n ";
    d=c;
    d.display();
    return 0;
}