#include <iostream>

using namespace std; 

int main (){

    int B ,D;
    unsigned long A , E;
    long C;

    cin >> A>> B;
    for(int i = 0 ; i< B;i++){
        cin>>C>>D;
        E+=C*D;
    }
     if(A==E){
        cout<< "Yes"<<endl;
    }else{
        cout<< "No"<<endl;
    }
    return 0;
}