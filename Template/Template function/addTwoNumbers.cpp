#include<iostream>
using namespace std;
template<class T>
void add(T a,T b)
{
cout<<"\n sum="<<a+b;
}
int main()
{
    int x,y;
    float m,n;
    cout<<"\n enter two integer";
    cin>>x>>y;
    add(x,y);
    cout<<"\n enter two floating number";
    cin>>m>>n;
    add(m,n);
    return 0;
}
