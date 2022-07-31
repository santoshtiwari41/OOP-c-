#include<iostream>
using namespace std;
void sample(int n)
{
    try
    {
        if(n>0)
        {
            throw n;
        }
        else if(n==0)
        {
            throw n;
        }
        else{
            throw float(n);
        }
    }
    catch(int x)
    {
        cout<<"\n exception integer";
    }
    catch(char y)
    {
        cout<<"\n exception character";
    }
    catch(float z)
    {
       cout<<"\n exception float";
    }
    
}
int main()
{
    int a;
    cout<<"\n enter a";
    cin>>a;
    return 0;
}