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
# include "list.h"
int main()
{
    int num[10] = {1,5,2,3,4,7,8,9,10,0};
    string word[5] = {"Hello", "Fine", "Bonjout", "Yes", "You"};
    seqList<int> L;
    seqList<string> L1;
    for(int i = 0; i < 10; i++){
        L.insert(i,num[i]);
    }
    for(int i = 0; i < 5; i++){
        L1.insert(i,word[i]);
    }
    L1.traverse();
    L.traverse();
    L.remove(5);
    L.traverse();
    L.remove(10);
    cout<<L.search(2)<<endl;
    cout<<L.search(15)<<endl;
    cout<<L.visit(1);
    return 0;
}


