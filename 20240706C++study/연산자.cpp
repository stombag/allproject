#include <iostream>

using namespace std;

int main(){
    int a; 

    a = 10;
    int b = 20;

    int ret = a+ b;
    cout << a << " + " << b << " = "<<ret << endl;

    ret = a - b;
    cout << a<< " - "<< b<< "=" <<ret<<endl;

    ret = a * b ;
    cout << a << "X" <<b<<"=" <<ret<<endl;

    ret = a /b  ;
    cout << a<<"/"<<b<< "="<<ret<<endl;
    return 0;
    
    }