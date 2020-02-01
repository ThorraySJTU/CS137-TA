#include <iostream>
#include <conio.h>
using namespace std;

class Parent
{
 public:

     char data[20];
     void Function1();
     virtual void Function2();   // ÕâÀïÉùÃ÷Function2ÊÇÐéº¯Êý

 }parent;

 void Parent::Function1()
 {
     cout<<"This is parent, function1\n";
 }

 void Parent::Function2()
 {
     cout<<"This is parent, function2\n";
 }

 class Child:public Parent//Child¼Ì³ÐParent
 {
     void Function1();
     void Function2();

 } child;

 void Child::Function1()
 {
     cout<<"This is child, function1\n";
 }

 void Child::Function2()

 {
     cout<<"This is child, function2\n";
 }

int main(int argc, char* argv[])
{
    Parent *p;
    if(_getch()=='c')
        p = &child;
    else
        p = &parent;
    p->Function1();
    p->Function2();
    return 0;
}
