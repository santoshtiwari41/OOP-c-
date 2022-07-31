#include<iostream>
using namespace std;
void sample(float n)
{
    try
    {
        if(n==0)
        {
            throw n;
        }
        
        else{
            cout<<n;
        }
    }
    catch(float x)
    {
        cout<<"\n exception within function";
    }
   
    
}
int main()
{
   try {
       sample(20.5);
       sample(0.0);
   }
   catch(float m)
   {
       cout<<"\n exception within main";
   }
    return 0;
}