#include <iostream>
using namespace std;

void pointer(char *acWelcome) {
    cout<<sizeof(acWelcome)<<endl;
}

//数组作为参数传给函数时，是传给数组的地址，而不是传给整个的数组空间
void Array(char acWelcome[]) {
    cout<<sizeof(acWelcome)<<endl;
}

int main() {
    char acWelcome[] = "Welcome to Huawei Test";
    //pointer(acWelcome);
    //Array(acWelcome);
    //cout<<sizeof(acWelcome);
    return 0;
}
