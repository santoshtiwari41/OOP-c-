#include<iostream>
using namespace std;
template<class T1,class T2>
void add(T1 a,T2 b)
{
    cout<<"\n sum="<<a+b;
}
int main()
{
    
    
    add(10,10.5);
    add(20.56576,6.74758);
    return 0;
}