#include<iostream>
using namespace std;
template<class T, int s>
class sorting 
{
    T a[s];
    public:
    void input()
    {
        cout<<"\n enter elements";
        for(int i=0;i<s;i++)
        {
            cin>>a[i];
        }
    }
 void display()
    {
        cout<<"\n  elements are  ";
        for(int i=0;i<s;i++)
        {
           cout<<a[i];
        }
    }
    void sort();
};
template<class T,int s>
void sorting<T,s>::sort()
{
    for(int i=0;i<s-1;i++)
    {
        for(int j=0;j<s-1-i;j++)
        {
            if(a[j]<a[j+1])
            {
                T temp =a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main()
{
    sorting<int,4> s1;
    s1.input();
    s1.display();
    s1.sort();
    s1.display();

    sorting<float,4> s2;
    s2.input();
    s2.display();
    s2.sort();
    s2.display();
    return 0;
}