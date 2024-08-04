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
    /* 수정 */
    }
    /*iostream은 헤더파일이라고 합니다. iostream 헤더파일에는 함수, 입출력에 대한 클래스 데이타타입등에 대한 각종 선언에 대한 내용이 기록되어 있습니다.
cout, cin 등에 대한 정보가 iostream 헤더파일에 기록되어 있습니다.
std는 네임 스페이스로 cout, cin등이 std 네임스페이스 안에 선언되어 있어서 코딩 초입부에 기재한 것입니다. 
using namespace std;를 안쓰면
std::cout 으로 네임스페이스를 지정하시면 됩니다.*/