// 재귀함수 재귀호출

#include <iostream>

void data(int num)
{


    if (num == 2)
    {
        std::cout << num <<" if문 종료" << std::endl;

        return;
    };

    std::cout << num << std::endl;
    data(num + 1);
    std::cout << num << std::endl;
    data(num + 1);
    std::cout << num << std::endl;
    data(num + 1);
    std::cout << num << std::endl;
}

int main()
{
    data(0);
    return 0;
}