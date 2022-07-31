#include<iostream>
using namespace std;
template<class T1,class T2>
class addition
{
    T1 a;
    T2 b;
    public:
    addition(T1 a,T2 b)
    {
        this->a=a;
        this->b=b;
    }
    void display()
    {
        cout<<"\n"<<a<<","<<b;
    }
    void sum()
    {
        cout<<"\n sum="<<a+b;
    }
};
int main()
{
    addition<int,float>  d(10,20.5);
    d.display();
    d.sum();
    addition <float,int> f(10.5,3);
    f.display();
    f.sum();
    return 0;
}