#include<iostream>
#include<string.h>
using namespace std;
class A
{    int roll;
    char name [20];
    int marks;
    static int batch;
 public:
 A(){

 }
 A(int x, char y[],int z)
 {
    roll=x;
    strcpy(name,y);
    marks=z;
    
 }
 /*void input()
 {
     cout<<"enter name roll and marks";
     cin>>name>>roll>>marks;
 }*/
 void display()
 {
 cout<<"\n name="<<name<<"\n roll="<<roll<<"\n marks="<<marks<<"\n batch="<<batch;
 }

};
int A::batch=2021;// default is 0;
int main()
{
    A a(41,"santosh",1),b(47,"nabin",2);
    //A a,b;
    //a.input();
    //b.input();
    a.display();
    b.display();
    return 0;
}