#include<iostream>
using namespace std;
class dist 
{
float feet,inch;
public:
dist()
{

}
dist(float x,float y)
{
feet=x;
inch=y;
}
void dispaly()
{
    cout<<feet<<" feet "<<inch<<" inch";
}
operator float()
{
    float fl;
    fl=inch/12;
    fl=fl+feet;
    return(fl/3.28);
}
};
int main()
{
    dist d(3,3.36);
    cout<<"\n distance before conversion \n";
    d.dispaly();
    float m=d;
    cout<<"\n distance after conversion \n";
    cout<<m;
    return 0;
}