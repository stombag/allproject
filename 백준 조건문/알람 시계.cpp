#include <iostream>

using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (b < 45)
    {
        b += 15;
        if (--a < 0)
            a = 23;
    }
    else

        b -= 45;

    cout << a << " " << b;

    return 0;
}
/* 조금 생각해야함 */