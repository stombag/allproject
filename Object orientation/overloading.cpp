#include <iostream>

struct Vector2
{
    int x;
    int y;

    Vector2(int _x, int _y)
    {
        x = _x;
        y = _y;
    }

    Vector2 operator+(Vector2 other)
    {
        return Vector2(x + other.x, y + other.y);
    }

    /* data */
};

int main()
{
    Vector2 pos1(2, 1);
    Vector2 pos2(2, 1);

    Vector2 ret = pos1 + pos2;
    ret = pos1.operator+(pos2);

    // Vector2 ret(pos1.x + pos2.x, pos1.y + pos2.y);
}