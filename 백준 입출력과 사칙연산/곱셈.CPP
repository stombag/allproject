#include <iostream>

using namespace std;

int main (){

    int A, B ;
    cin >> A>> B;
    int c = A*(B % 10);
    int d = A * ( B/10%10);
    int e = A * (B/100);
    cout << c <<endl;
    cout << d << endl;
    cout << e << endl; 
    cout <<e*100+d*10+c<< endl;

    return 0; 
}