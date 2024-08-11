#include <iostream>

using namespace std;

class A
{
public:
    int v = 200;
};

void ad()
{
    static int c = 1200;
    int a = 200;
    {
        int a = 1;
        a + c;
        cout << a + c << endl;
    }
}

int main()
{

    int b = 500;
    ad();
    return 0;
}
