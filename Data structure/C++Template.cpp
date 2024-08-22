#include <iostream>

#include <list>

// int add(int a, int b)
// {
//     return a + b;
// };
// float add(float a, float b)
// {
//     return a + b;
// };

// 템플릿 함수
template <typename T>
T add(T a, T b)
{
    return a + b;
};

template <>
int add(int a, int b)
{
    return a + b;
};

template <typename T>
class Node
{
public:
    int data;
    Node *next;
};
int main()
{
    int ret = add<float>(3.2, 5.5);
    float ret = add<float>(3.2, 5.5);

    Node<float> fNode;
    fNode.data = 10.0f;

    Node<int> fNode;
    fNode.data = 10;
    return 0;
}
