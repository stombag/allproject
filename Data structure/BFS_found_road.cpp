#include <iostream>
#include <string>
#include <string.h>
#include <list>
#include <assert.h>
#include <vector>
#include <stack>
#include <queue>

int map[3][3] = {
    {0, 1, 0},
    {0, 0, 1},
    {0, 0, 0},
};
struct Node
{
    int x;
    int y;
    int level;
};
std::queue<Node> queue = {};
int used[6] = {};
int direct[4][2] = {
    0,
    1,
    0,
    -1,
    1,
    0,
    -1,
    0,
};

// Node queue[7] = { {0,0} };
int main()
{
    queue.push(Node{1, 0, 1});
    map[0][1] = 1;

    while (!queue.empty())
    {

        Node now = queue.front();

        if (now.y == 2 && now.x == 2)
        {
            int t = 0;
        }

        for (size_t i = 0; i < 4; i++)
        {
            int dy = now.y + direct[i][0];
            int dx = now.x + direct[i][1];

            if (dy < 0 || dx < 0 || dy > 2 || dx > 2)
                continue;
            if (map[dy][dx] > 0)
                continue;
            Node next = Node{dx, dy, now.level + 1};
            map[dy][dx] = now.level + 1;

            int a = 0;
        }

        queue.pop();
    }

    return 0;
}
