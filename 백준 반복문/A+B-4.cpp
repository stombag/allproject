#include <iostream> 

using namespace std;

int main() {
   
   int A,B;

   while (!(cin>>A>>B).eof() ){
    cout << A + B << "\n";
   }
   return 0;
}

/*!(cin >> A >> B).eof(): ! 연산자는 eof()의 결과를 부정합니다. 따라서 !(cin >> A >> B).eof()는 파일 끝에 도달하지 않았을 때 true로 평가됩니다. EOF에 도달하면 eof()는 true를 반환하고, 이를 부정하면 조건이 false가 되어 루프가 종료됩니다.*/