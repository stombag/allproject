#include <iostream>

using namespace std;

class champion
{

    int _Qskill;
    int _Wskiil;
    int _Eskill;
    int _Rskill;

public:
    champion()
    {
        cout << "기본 생성자" << endl;
    }
    champion(int Qskill, int Wskill, int Eskill, int Rskill)
    {
        cout << "인자를 4개 받는 생성자 " << endl;
        _Qskill = Qskill;
        _Wskiil = Wskill;
        _Eskill = Eskill;
        _Rskill = Rskill;
    }
    champion(int Qskill)
    {
        cout << "인자를 1개 받는 생성자" << endl;
        _Qskill = Qskill;
        _Wskiil = 1000;
        _Eskill = 200;
        _Rskill = 10000;
    }
};

int main()
{

    champion garen(1000, 2000, 30000, 40000);

    champion piora(10);
    champion skaner;
}