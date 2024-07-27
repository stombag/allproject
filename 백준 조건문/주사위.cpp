#include <iostream>

using namespace std;

int main(){
    int A, B, C, D;
    cin >> A >> B >> C ;

    if (A==B && A==C && B == C){
        D = (10000+(A*1000));
    } else if (A==B || B==C){
        D = 1000+B*100;
    } else if (C==A){
        D = 1000+C*100;
    } else if (A!=B && A !=C && B != C){
        int max;
        if(A>B){
            if (C>A){
                max = C;
                // c가 가장 클 경우

            }else {
                max = A;
                //  A가 가장 클 경우
            }
        }else{
        if (C>B){
            max = C;    
        }else{
            max = B;
        }
       
        }
        D = max * 100;



        }
        cout << D << endl;
        return 0;

    
}