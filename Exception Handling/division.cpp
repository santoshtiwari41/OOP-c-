#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter two numbers";
    cin>>a>>b;
    try
    {
        if(b!=0)
    {
        cout<<"\n Division="<<a/b;
    }
    else{
        throw(b);
    }
    }
    catch(int n)
    {
        cout<<"\n thesse is an error division by b";
    }
    return 0;
}