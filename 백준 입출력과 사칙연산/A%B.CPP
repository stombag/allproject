#include <iostream>

using namespace std;

int main(){
    double A, B;
// float은 소수점 이하 6자리까지, double은 소수점 이하 15자리까지이기 때문에 이 문제에서는 double 형을 사용해야한다.
    cin >> A >> B ;
// cout<<fixed;는 소수점 아래부터 유효숫자를 세겠다라는 명령어입니다.
    cout << fixed;
// cout.precision(숫자)는 유효숫자 표기 명령어다.
// 즉, 소수점과 상관 없이 전체 자리 숫자를 고정하는 명령어이고
	cout.precision(9);

    cout<< A/B<<endl;
    return 0;

}
