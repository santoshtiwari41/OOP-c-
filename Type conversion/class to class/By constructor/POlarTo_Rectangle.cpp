// conversion from polar to rectangle
#include<iostream>
#include<math.h>
using namespace std;
class polar
{
    float r,t;
    public:
    polar()
    {

    }
    polar(float a,float b)
    {
        r=a;
        t=b;
    }
    void display()
    {
        cout<<"\t r="<<r<<"\thita= "<<t;
    }
     float getr()
     {
         return r;
     }
     float getthita()
     {
         return t;

     }
};
class rectangle 
{
float x,y;
public:
rectangle()
{

}
rectangle(float c,float d)
{
    x=c;
    y=d;
}
void display()
{
    cout<<"\n x="<<x<<"\t y="<<y;
}
rectangle(polar p)
{
  float radius=p.getr();
  float angle=p.getthita();
  x=radius*cos(angle);
  y=radius*sin(angle);
}
};
int main()
{
    polar m(5,0.78);
    rectangle r;
    cout<<"\n before conversion \n";
    m.display();
    cout<<"\n after conversion \n";
    r=m;
    r.display();
    return 0;
}