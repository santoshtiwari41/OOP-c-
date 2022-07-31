#include <iostream>
using namespace std;

class Space
{
    int x;

public:
    Space(int a) { x = a; }
    void operator++()
    {
        ++x;
    }
    void operator++(int)//post increment
    {
        x++;
    }
    void operator--()
    {
        --x;
    }
    void operator-()
    {
        x = -x;
    }
    void display()
    {
        cout << x << endl;
    }
};
int main()
{
    Space s1(20);
    s1.display();
    cout<<"\n pre -increment:";
    ++s1;
    s1.display();
    cout<<"\n post -increment:";
    s1++;
    s1.display();
    cout<<"\n pre -drecrement:";
    --s1;
    s1.display();
    cout<<"\n unary minus operator:";
    -s1;
    s1.display();

    return 0;
}