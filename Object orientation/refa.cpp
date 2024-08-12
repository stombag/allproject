#include <iostream>

using namespace std;

int main()
{
    int a = 20;
    int b = 30;

    int &refa = a;
    cout << "refa" << refa << endl;
    cout << "a " << a << endl;
    a = 200;
    // a의 값이 refa 같아진다. 변해도 달라 지지않고 같아진다. 2개의 폰 동기화하는 느낌
    refa = 100;
    cout << "1000 대입" << endl;
    cout << "refa" << refa << endl;
    cout << "a " << a << endl;

    int *pa = &a;
    cout << "*pa" << *pa << endl;
    cout << "a" << a << endl;
    *pa = 200;

    cout << "200" << endl;
    cout << "*pa" << *pa << endl;
    cout << "a" << a << endl;
    cout << pa << endl;

    // "pa변수에 저장된 주소값을 b변수의 주소 값으로 변경"
    pa = &b;
    *pa = 6000;

    return 0;

    const int a = 200;

    // 1:45:28
}