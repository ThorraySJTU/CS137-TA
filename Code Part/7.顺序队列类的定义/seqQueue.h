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
class seqQueue
{
    public:
        seqQueue(int sizeSet = 10);
        ~seqQueue();
        bool isEmpty();
        void enQueue(const elemType &elem);
        elemType deQueue();
        elemType getHead();

    private:
        elemType * elem;
        int maxSize;
        int front, rear;
        void doubleSpace();
};

template<class elemType>
seqQueue<elemType>::seqQueue(int sizeSet){
    elem = new elemType[sizeSet];
    maxSize = sizeSet;
    front = 0;
    rear = 0;
}

template<class elemType>
seqQueue<elemType>::~seqQueue(){
    delete [] elem;
}

template<class elemType>
bool seqQueue<elemType>::isEmpty(){
    return front == rear;
}

template<class elemType>
void seqQueue<elemType>::enQueue(const elemType &x){
    if((rear+1) % maxSize == front){
        doubleSpace();
    }

    rear = (rear+1) % maxSize;
    elem[rear] = x;
}

template <class elemType>
elemType seqQueue<elemType>::deQueue()
{
    front = (front + 1) % maxSize;
    return elem[front];
}

template <class elemType>
elemType seqQueue<elemType>::getHead()
{
    return elem[(front + 1) % maxSize];
}

template <class elemType>
void seqQueue<elemType>::doubleSpace()
{
    elemType *temp = elem;
    elem = new elemType[maxSize * 2];
    for(int i = 0; i < maxSize; i++){
        elem[i] = temp[(front + i) % maxSize];
    }
    front = 0;
    rear = maxSize;
    maxSize *= 2;
    delete [] temp;
}

#endif // SEQQUEUE_H
