#include<iostream>
using namespace std;
class student
{
    private:
    int roll;
    char name[20];
    public:
    void input()
    {
        cout<<"\n enter name and roll\n";
        cin>>name>>roll;
    }
    void dispaly()
    {
        cout<<"\n Name="<<name<<"\t Roll="<<roll;
    }
};
int main()
{
    student s[20];
    int n,i;
    cout<<"\n enter the number of students\n";
    cin>>n;

    cout<<"\n enter details \n";

    for(i=0;i<n;i++)
    {
        s[i].input();
    }

    cout<<"\n Detail of students :\n";

    for(i=0;i<n;i++)
    {
        s[i].dispaly();

    }
    
    return 0;
}