/*
        -----    -----      |      ------|     ------|
      /         /           |            |           |
      |         \           |            |           |
      |            \        |      ------|           |
      |               \     |            |           |
      \               /     |            |           |
        -----    -----      |      ------|           |
@SJTU Paris-Tech 2020 Spring Data Structure
@TA:Lei WANG
*/
# include<iostream>
using namespace std;
# include "linkStack.h"
int main()
{
    linkStack<int> L;
    cout<<"Stack is empty or not: "<<L.isEmpty()<<endl;
    L.push(5);
    cout<<"Stack is empty or not: "<<L.isEmpty()<<endl;
    cout<<"Stack top: "<<L.top()<<endl;
    L.push(3);
    cout<<"Stack top: "<<L.top()<<endl;
    cout<<"Stack pop: "<<L.pop()<<endl;
    cout<<"Stack top: "<<L.top()<<endl;
    return 0;
}
