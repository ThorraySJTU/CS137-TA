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
# include "linkList.h"
int main()
{
    int num[10] = {1,5,2,3,4,7,8,9,10,0};
    linkList<int> L;
    for(int i = 0; i < 10; i++){
        L.insert(i,num[i]);
    }
    L.traverse();
    L.insert(4,50);
    L.traverse();
    L.remove(5);
    L.traverse();
    cout<<L.search(2)<<endl;
    cout<<L.search(15)<<endl;
    cout<<L.visit(1);
    return 0;
}


