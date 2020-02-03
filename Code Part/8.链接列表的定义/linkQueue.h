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

#ifndef SEQQUEUE_H
#define SEQQUEUE_H

template<class elemType>
class linkQueue
{
    public:
        linkQueue();
        ~linkQueue();
        bool isEmpty();
        void enQueue(const elemType &elem);
        elemType deQueue();
        elemType getHead();

    private:
        struct node{
            elemType data;
            node * next;
            node(const elemType &x, node * N = NULL){
                data = x;
                next = N;
            }
            node():next(NULL){}
            ~node(){}
        };
        node * front, * rear;
};

template<class elemType>
linkQueue<elemType>::linkQueue(){
    front = NULL;
    rear = NULL;
}

template<class elemType>
linkQueue<elemType>::~linkQueue(){
    node * temp;
    while(front != NULL){
        temp = front;
        front = front->next;
        delete temp;
    }
}

template<class elemType>
bool linkQueue<elemType>::isEmpty(){
    return front == NULL;
}

template<class elemType>
void linkQueue<elemType>::enQueue(const elemType &x){
    if(rear == NULL)
        front = rear = new node(x);
    else{
        rear->next = new node(x);
        rear = rear->next;
    }
}

template <class elemType>
elemType linkQueue<elemType>::deQueue()
{
    node * temp = front;
    elemType value = front->data;
    front = front->next;
    if(front == NULL)
        rear = NULL;
    delete temp;
    return value;
}

template <class elemType>
elemType linkQueue<elemType>::getHead()
{
    return front->data;
}

#endif // SEQQUEUE_H
