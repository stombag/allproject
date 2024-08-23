#include <iostream>

int main()
{

    int map[4][4] = {
        0,
        0,
        1,
        1,
        1,
        0,
        1,
        1,
        0,
        1,
        0,
        0,
        0,
        0,
        0,
        0,
    };
    int target = 1;

    for (size_t i = 0; i < 4; i++)
    {
        if (map[target][i] != 0)
        {
            std::cout << i << "번";
        }
    }

    return 0;
}