#include<iostream>
using namespace std;
template<class T>
void display(T x)
{
    cout<<"\n x:"<<x;
}
template<class T1,class T2>
void display(T1 a,T2 b)
{
    cout<<"\n a:"<<a<<"\t b:"<<b;
}
void display(int m)
{
    cout<<"\n m:"<<m;
}
int main()
{
    display(100);//calls explict ,normal function
    display(10,10.5);// calls template function 
    display("X");// calls template function

    return 0;
}
