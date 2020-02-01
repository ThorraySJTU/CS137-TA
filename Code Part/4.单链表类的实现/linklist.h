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
#ifndef LINKLIST_H_INCLUDED
#define LINKLIST_H_INCLUDED

template <class T>
class linkList{
    private:
        struct node{
            T value;
            node * next;
            node():next(NULL){};
            node(const T &v, node * n = NULL):value(v), next(n){};
        };
        node * head;
        int Size;
    protected:
        node *get(int i)const{
            if(i < 0)
                return head;
            node *p = head->next;
            for(int j = 0; j < i; j++){
                p = p->next;
            }
            return p;
        }
    public:
        linkList():Size(0){
            head = new node;
        }
        ~ linkList(){
            clear();
            delete head;
        }
        void clear(){
            while(Size > 0){
                remove(0);
            }
        }
        void insert(int i,const T &x){
            node *p = get(i-1);
            p->next = new node(x, p->next);
            Size++;
        }
        void remove(int i){
            if(i > Size || i < 0){
                cout<<"Remove point is illegal."<<endl;
            }
            else{
                node *p = get(i-1);
                node *q = p->next;
                p->next = q->next;
                delete q;
                Size--;
            }
        }
        int search(const T &x)const{
            node *p = head->next;
            for(int i = 0; p; i++){
                if(x == p->value)
                    return i;
                p = p->next;
            }
            return -1;
        }
        T visit(int i)const{
            return get(i)->value;
        }
        void traverse() const{
            node *p = head->next;
            while(p){
                cout<<p->value<<" ";
                p = p->next;
            }
            cout<<endl;
        }

};

#endif // LINKLIST_H_INCLUDED
