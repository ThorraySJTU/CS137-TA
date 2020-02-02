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
class linkStack{
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
        node * elem;
    public:

        linkStack(){
            elem = NULL;
        }

        ~linkStack(){
            node * temp;
            while(elem != NULL){
                temp = elem;
                elem = elem->next;
                delete temp;
            }
        };

        bool isEmpty() const{
            return elem == NULL;
        }

        void push(const elemType &x){
            node * temp = new node(x, elem);
            elem = temp;
        }

        elemType pop(){
            node * temp = elem;
            elemType x = temp->data;
            elem = elem->next;
            delete temp;
            return x;
        }

        elemType top()const{
            return elem->data;
        }
};

#endif // SEQSTACK_H_INCLUDED
