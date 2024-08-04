#include <iostream>

using namespace std ;

int main () {

    int A ,B , C; 
    cin >> A; 

    for (int i = 1; i<= A; i++){
        int D;
        cin >> B>> C;
        D = B+C;

        cout << "Case #"<<i<<":"<< D<< '\n'<<endl;

    }
    return 0;
}