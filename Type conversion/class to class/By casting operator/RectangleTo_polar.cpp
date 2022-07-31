/* Program to converse rectangle to polar coordinate using casting operator
    
*/

#include <iostream>
#include <math.h>
using namespace std;

class polar
{
    float radius, angle;

public:
    polar() {}
    polar(float x, float y)
    {
        radius = x;
      angle = y;
    }
    void display()
    {
         cout << "\n radius=" << radius << "\t angle=" << angle;
       
    }
};
class Rectangle
{
    float xco,yco;

public:
    Rectangle() {}
    Rectangle(float c, float d)
    {
        xco = c;
        yco = d;
    }
    void display()
    {
        cout << "\n X=" << xco << "\t Y=" << yco;
    }
    operator polar()
    {
        float angle = atan(yco/xco);
        float radius= sqrt(xco*xco+yco*yco);
        return polar(radius, angle);
    }
};
int main()
{
    Rectangle r(3, 4);
    polar p;
    cout << "\n before conversion\ n ";
    r.display();
    cout << "\n after conversion\ n ";
    p=r;
    p.display();
    return 0;
}