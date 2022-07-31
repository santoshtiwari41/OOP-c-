#include<iostream>
#include<math.h>
using namespace std;
void root (float a)
{
    if(a>=0)
    {
      cout<<"\n square root="<<sqrt(a);
    }
    else{
        throw(a);
    }
}
int main()
{
    float x;
    cout<<"\n enter number ";
    cin>>x;
    try
    {
       root(x);
    }
    catch(float m)
    {
        cout<<"\n exception due to negative square root \n";
        cout<<"\n x="<<m;
    }
    return 0;
}