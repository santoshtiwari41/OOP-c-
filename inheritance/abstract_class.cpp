/*
A class that contains a pure virtual function is known as an abstract class.
We cannot create objects of an abstract class.
However, we can derive classes from them, and use their data members and member functions (except pure virtual functions).

class Shape {
    public:

      // creating a pure virtual function
      virtual void calculateArea() = 0;
};
*/

#include <iostream>
using namespace std;
class shape 
{
  protected:
  int x,y;
  public:
  void input()
  {
    cout<<"\n enter the dimension";
    cin>>x>>y;
  }
  void display()
  {
    cout<<"\n dimensions are \n"<<x<<","<<y;
  }
  virtual void area()=0;// pure virtual function
};
class rectangle:public shape 
{
  public:
  void area()
  {
    cout<<"\n area of rectangle = "<<x*y;
  }
};
class triangle:public shape
{
public:
void area()
{
cout<<"\n area of triangle ="<<(x*y)/2;
}
};
int main()
{
  rectangle r;
  r.input();
  r.display();
  r.rectangle::area();
  triangle t;
  t.input();
  t.display();
  t.triangle::area();
  return 0;
}
