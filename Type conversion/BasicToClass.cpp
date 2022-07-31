#include<iostream>
using namespace std;
class dist
{
    int feet;
    float inches;
    public:
    dist()
    {

    }
    dist(int f,float i)
    {
        feet= f;
        inches =i;
    }
    void display()
    {
        cout<<feet<<" feet "<<inches<<" inches";
    }
    dist(float mtr)
    {
        float x;
        x=mtr*3.28;// 1 meter= 3.28 feet
        feet=x;
        inches=12*(x-feet);// 1 feet = 12 inches
    }
};
int main()
{
    float m;
    cout<<"\n enter the distance in meter\n ";
    cin>>m;
    cout<<"\n before conversion\n ";
    cout<<m<< " meter";
    dist d=m;
    cout<<"\n after conversion \n ";
    d.display();
    return 0;
}