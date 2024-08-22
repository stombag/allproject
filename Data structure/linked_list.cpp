#include <iostream>
#include <list>

namespace ya
{
    template <typename T>
    class list
    {
    public:
        struct Node
        {
            T data;
            Node *back;
            Node *front;
        };
        list()
        {
        }
        ~list()
        {
        }

        void push_back(T data)
        {
            if (mHead == nullptr)
            {
            }
        }

    private:
        Node *mHead;
        Node *mTail;
    };
};

int main()
{
    std::list<int> stllist;
    stllist.push_back(10);
    stllist.push_back(20);
    stllist.push_front(-30);


    ya::list<int> yalist;
    yalist.push_back(1);
    yalist.push_back(2);
    yalist.push_back(3);

    return 0;
}
