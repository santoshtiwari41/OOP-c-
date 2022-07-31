#include<iostream>

using namespace std;
float area(float x)
{
    return(x*x);
}
float area(float a,float b)
{
    return (a*b)/2;
}
int area (int m,int n)
{
    return m*n;
}
int main()
{
    int l,b;
    float d,h;
    cout<<"\n enter the side of square";
    cin>>l;
    cout<<"\n area of square is :"<<area(l);

    cout<<"\n enter the two side of rectangle";
    cin>>l>>b;
    cout<<"\n area of rectangle :"<<area(l,b);

    cout<<"\n enter the base and height of triangle";
    cin>>d>>h;
    cout<<"\n area of triangle is :"<<area(d,h);

    return 0;
}