#include <iostream>

struct Vector2
{

    int x;
    int y;
    Vector2 operator+(Vector2 other)
    {
        Vector2 ret;
        ret.x = x + other.x;
        ret.y = y + other.y;
        return ret;
    }
};

int main()
{
    Vector2 p1;

    p1.x = 1;
    p1.y = 1;

    Vector2 p2;

    p2.x = 3;
    p2.y = 5;

    Vector2 p3;

    p3.x = p1.x + p2.x;
    p3.y = p1.y + p2.y;

    p3 = p1 + p2;

    return 0;
}