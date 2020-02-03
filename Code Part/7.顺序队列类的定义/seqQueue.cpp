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
# include "seqQueue.h"
int main(){
    seqQueue<int> L(100);
    cout<<"Queue is empty or not: "<<L.isEmpty()<<endl;
    L.enQueue(3);
    L.enQueue(2);
    L.enQueue(10);
    cout<<"Dequeue: "<<L.deQueue()<<endl;
    cout<<"GetHead: "<<L.getHead();
    return 0;
}

