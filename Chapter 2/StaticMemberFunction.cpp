/*
It is the member function which is declared using static keyword and only access to 
static variables is called static member function;
*/
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
 cout<<"\n name="<<name<<"\n roll="<<roll<<"\n marks="<<marks;
 }
 static void showbatch()
 {
     cout<<"\n Batch="<<batch;
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
    A::showbatch();
    b.display();
    A::showbatch();
    return 0;
}