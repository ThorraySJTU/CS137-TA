#include<iostream>
using namespace std;
class MyClass
{
    public:
        MyClass(int i = 0){
            cout << i;
        }
        MyClass(const MyClass &x){
            cout << 2;
        }
        MyClass &operator=(const MyClass &x){
            cout << 3;
            return *this;
        }
        ~MyClass(){
            cout << 4;
        }
};
int main()
{
    MyClass obj1(1), obj2(2);
    /*
    obj1 = obj2;
    */
    //拷贝构造函数
    /*
    MyClass obj3;
    obj3 = obj1;
    */
    //赋值构造函数
    /*
    MyClass obj3 = obj1;
    */
    /*
    拷贝构造函数发生在对象还没有创建；赋值操作符重载仅发生在对象已经创建的情况下。
    */
    return 0;
}
