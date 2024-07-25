#include <iostream>

using namespace std;

int main() {
    int X,Y;
    cin >> X >> Y ;
    if (0<X && 0<Y){
        cout<< 1 << endl;
    } else if (0>X && 0< Y){
        cout << 2 << endl;
    } else if (0>X&& 0>Y){
        cout << 3 << endl;
    } else if (0<X && 0>Y){
        cout << 4 << endl;
    }
    
    return 0 ;
}