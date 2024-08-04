#include <iostream>

using namespace std;
int main () {
    // 이 두개를 사용하는 이유는 속도 때문이다 
    cin.tie(NULL);
    /*
    메인 함수 첫 줄에 선언
    cin과 cout 묶음을 풀어주는 구문
    cin으로 데이터를 읽을 때 출력 버퍼에 있는 내용을 비우는데 비우지 않고 먼저 입력
    */
    ios :: sync_with_stdio(false);
    // C와 C++버퍼 분리 역할
    int A; 
    cin >> A;

    for ( int i =0; i<A ; i++){
        int A,B;
        cin >> A >> B;
        cout << A + B << '\n';
    }

    return 0;
}
/* ios::sync_with_stdio(false) 이 코드는 C와 C++ 표준 stream의 동기화를 비활성화합니다.

동기화가 활성화 되어있을 땐 C 스타일과 C++스타일의 입출력을 혼합해도 문제가 없습니다.
예를 들어 C스타일(printf scanf) C++스타일(cin cout)을 혼합하여 사용해도 문제가 없습니다.

하지만 이 코드를 작성하면 C 스타일과 C++ 스타일이 혼합할 수 없는 대신에,
C++ 스타일 코드만 사용하면 기존 동기화 과정에서 필요하던 시간이 절약되어
입출력 속도가 빨라지는 효과가 있습니다.

즉 알고리즘 문제를 풀 때는 표준 stream의 동기화는 필요없고 시간이 절약되는 게 우선이니
ios::sync_with_stdio(false)를 사용하여 입출력 시간을 절약할 수 있습니다.
다만 이 코드를 사용하면 기존 C의 표준 입출력인
scanf, printf, getchar 함수를 사용하면 오류가 발생할 수 있습니다.
C++의 입출력인 cin, cout만 사용하도록 주의해야합니다.*/

/*  cin.tie(null) 이런 코드가 있다면
평소에는 cin과 cout이 하나로 묶어져 있어서 
"Write your name, please \n" 가 반드시 먼저 출력된 후 이름을 입력할 수 있습니다.
그러나 cin.tie(0)이나 cin.tie(null) 코드를 추가해 주면
"Write your name, please \n" 출력이 되기 전에 이름을 입력할 수 있습니다.
내부적으로 cin과 cout을 묶어주는 과정을 수행하지 않기 때문에 시간이 절약됩니다.
다른 프로그램에서 이렇게 사용한다면 이름을 입력해달라고 요구하기 전에
입력을 할 수 있는 자연스럽지 못한 프로그래밍일 수 있습니다.
그러나 알고리즘 문제를 풀 때는 크게 상관이 없고,
입출력 시간을 절약할 수 있기 때문에 cin.tie(0) 코드를 많이 사용합니다.*/