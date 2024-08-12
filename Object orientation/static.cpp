#include <iostream>

using namespace std;

int damege = 0;
class age
{
public:
    void skill()
    {
        static int damege = +1000;
    }
};

int main()
{

    age a;
    a.skill();

    return 0;
}