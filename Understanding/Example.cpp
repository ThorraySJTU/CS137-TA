#include <iostream>
using namespace std;
class Exemple{
    public:
        Exemple(){
            f[0] = &Exemple::fun1;
            f[1] = &Exemple::fun2;
            f[2] = &Exemple::fun3;
        };
        ~Exemple(){};
        void (Exemple:: *f[3])();
        void show(int i){
            if(i < 3)
                (this ->* f[i])();
        };
    private:
        void fun1();
        void fun2();
        void fun3();
};
void Exemple::fun1(){	cout << """fun1:1" << endl;}
void Exemple::fun2(){	cout << "fun2:2" << endl;}
void Exemple::fun3(){	cout << "fun3:3" << endl;}
int main(){
    Exemple a;
    for (int i = 0; i < 3; i++)
        a.f[i];
    cout << endl;
    for (int i = 0; i < 3; i++)
        (a.*(a.f[i]))();
    a.show(1);
    return 0;
    }

