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
# include "linkQueue.h"
int main(){
    linkQueue<int> L;
    cout<<"Queue is empty or not: "<<L.isEmpty()<<endl;
    int i;
    for(i = 0; i < 20; i++){
        L.enQueue(i);
    }
    for(i = 0; i < 19; i++){
        cout<<"Dequeue: "<<L.deQueue()<<endl;
    }
    cout<<"GetHead: "<<L.getHead();
    return 0;
}

