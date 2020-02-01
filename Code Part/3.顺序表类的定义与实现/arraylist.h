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
#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

template <class elemType>
class seqList{
private:
    elemType *data; //动态数组的其实地址
    int currentLength; //表长
    int maxSize; //顺序表的容量
public:
    seqList(int initSize = 10);
    ~ seqList(){delete [] data;}
    void clear() {currentLength = 0;}
    void insert(int i, const elemType &x);
    void remove(int i);
    int search(const elemType &x) const;
    elemType visit(int i)const {return data[i];}
    void traverse() const;
};
/*
TODO:
1.append()函数的实现
2.setValue()函数的实现
*/
template <class elemType>
seqList<elemType> :: seqList(int initSize){
    data = new elemType[initSize];
    currentLength = 0;
    maxSize = initSize;
}

template <class elemType>
void seqList<elemType> :: insert(int i, const elemType &x){
    if(currentLength == maxSize){
        cout<<"Sequence List is full."<<endl;
    }
    else{
        int j;
        for(j = currentLength; j > i; j--){
            data[j] = data[j-1];
        }
        data[i] = x;
        currentLength++;
    }
}

template <class elemType>
void seqList<elemType> :: remove(int i){
    if(i > currentLength || i < 0){
        cout<<"Remove point is illegal."<<endl;
    }
    else{
        int j;
        for(j = i; j < currentLength-1; j++){
            data[j] = data[j+1];
        }
        currentLength--;
    }
}
template <class elemType>
int seqList<elemType> :: search(const elemType &x) const{
    int i;
    for(i = 0; i < currentLength; i++){
        if(data[i] == x){
            return i;
        }
    }
    return -1;
}

template <class elemType>
void seqList<elemType> :: traverse() const{
    int i;
    for(i = 0; i < currentLength; i++){
        cout<<data[i]<<" ";
    }
    cout<<endl;
}
#endif // LIST_H_INCLUDED
