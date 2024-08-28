#include <iostream>
#include <queue>

struct Node
{
    int data;
    int level;
    int path[10] = {};
};

int map[5][5]{
    {0, 1, 0, 1, 0},
    {0, 0, 1, 0, 1},
    {0, 0, 0, 0, 1},
    {0, 0, 0, 0, 1},
    {0, 0, 0, 0, 0}};

std::queue<Node> queue;
char value[10] = "BQWER";

int main()
{
    queue.push({0, 0, {1, 0, 0, 0, 0, 0, 0, 0, 0, 0}});

    while (!queue.empty())
    {
        Node now = queue.front();

        if (value[now.data] == 'R')
        {
            std::cout << now.path[0] << now.path[1] << now.path[2] << now.path[3] << now.path[4] << std::endl;
        }
        for (int i = 0; i < 5; i++)
        {
            if (map[now.data][i] == 0)
                continue;
            if (now.path[i] == 1)
                continue;

            Node next = now;
            next.data = i;
            next.level = now.level + 1;
            next.path[i] = 1;
            queue.push(next);
        }
        queue.pop();
    }
    return 0;
}