#include <iostream>
using namespace std;

void pointer(char *acWelcome) {
    cout<<sizeof(acWelcome)<<endl;
}

//������Ϊ������������ʱ���Ǵ�������ĵ�ַ�������Ǵ�������������ռ�
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
