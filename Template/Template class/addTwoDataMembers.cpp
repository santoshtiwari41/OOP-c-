#include<iostream>
using namespace std;
template<class T>
class addition
{
    T a,b;
    public:
    addition(T a,T b)
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
    addition<int>  d(10,20);
    d.display();
    d.sum();
    addition <float> f(10.5,3.7);
    f.display();
    f.sum();
    return 0;
}