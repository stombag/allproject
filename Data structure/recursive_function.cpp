// 재귀함수 재귀호출

#include <iostream>

char path[10] = "";
char name[10] = "KMG";
void run(int level)
{

    if (level == 3)
    {
        std::cout << path;
        std::cout << std::endl;

        return;
    };
    for (size_t i = 0; i < 3; i++)
    {
        path[level] = name[i];
        run(level + 1);
        path[level] = 0;
    }
}

int main()
{
    run(0);
    return 0;
}