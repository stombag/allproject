#include <iostream>

class Test
{

public:
    int b;
    int a;

    /*객체를 생성할때 자동으로 호출해주는 함수가 있다 그걸 생성자라고 한다*/

    Test()

        : a(0), b(0)
    {
    }
    Test(int num1, int num2)
        : a(num1), b(num2)
    {
    }
    ~Test()
    {
        a = 1;
        b = 0;
    }
};

int main()
{
    Test test;
    test.a = 0;
    test.b = 0;

    Test test2(10, 20);
}
