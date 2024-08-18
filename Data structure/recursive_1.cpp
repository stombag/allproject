// 재귀함수 재귀호출

#include <iostream>

char path[10] = "";
int visited[5] = {};

void test(int level)
{

    if (level == 3)
    {
        std::cout << path << std::endl;
                return;
    };
    for (size_t i = 0; i < 4; i++) {
        if (visited[i] == 1)
            continue;

        visited[i] = 1;
        path[level] = 'A' + i;
        test(level + 1);
        path[level] = 0; 
        visited[i] = 0;
    }

}

int main()
{
    test(0);
    return 0;
}