
#include <iostream>
#include "Global.cpp"

using namespace std;

// 정적멤버를 어떨때 사용.
int Global = 0; // 외부변수

int Global::_Score = 0;
void SetScore(int value)
{
    Global::SetScore(value);
}

int GetScore()
{
    return Global::GetScore();
}

// 잡다한 유용한 함수를 클래스에 넣어서
// 모아두고
class Utility
{
public:
    static int add(int a, int b)
    {
        return a + b;
    }

    static int sub(int a, int b)
    {
        return a - b;
    }

    static int mul(int a, int b)
    {
        return a * b;
    }
};

int main()
{

    // Global::Score = 10000;
    Global::SetScore(10000);

    // cout << "Global::Score = " << Global::Score << endl;
    cout << "Global::Score = " << Global::GetScore() << endl;

    int a = 20;
    int b = 30;

    Utility util;

    int ret = util.add(a, b);

    cout << a << " + " << b << " = " << ret << endl;

    cout << a << " - " << b << " = " << Utility::sub(a, b) << endl;

    return 0;
}