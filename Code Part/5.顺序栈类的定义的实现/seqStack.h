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
#ifndef SEQSTACK_H_INCLUDED
#define SEQSTACK_H_INCLUDED

template <class elemType>
class seqStack{
    private:
        elemType * data; //动态数组
        int top_p; //栈顶位置
        int maxSize; //数组规模
        void doubleSpace(); //扩大数组空间
    public:

        seqStack(int initSize = 10){
            data = new elemType[initSize];
            maxSize = initSize;
            top_p = -1;
        }

        ~seqStack(){
            delete [] data;
        }

        bool isEmpty() const{
            return top_p == -1;
        }

        void push(const elemType &x){
            if(top_p == maxSize-1)
                doubleSpace();
            data[++top_p] = x;
        }

        elemType pop(){
            return data[top_p--];
        }

        elemType top()const{
            return data[top_p];
        }
};

template<class elemType>
void seqStack <elemType>::doubleSpace(){
    elemType * tmp = data;
    data = new elemType[2 * maxSize];
    for(int i = 0; i < maxSize; i++){
        data[i] = tmp[i];
    }
    maxSize *= 2;
    delete [] tmp;
}
#endif // SEQSTACK_H_INCLUDED
