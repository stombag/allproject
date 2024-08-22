#include <iostream>
#include <string>
#include <string.h>
#include <list>
#include <assert.h>
#include <vector>

namespace ya
{
    template <typename T>
    class vector
    {
    public:
        vector()
            : mArr(nullptr), mSize(0), mCapacity(0)
        {
        }
        ~vector()
        {
            delete[] mArr;
        }
        void reserve(size_t size)
        {
            mArr = new T[size];
            mCapacity = size;
        }
        void resize(size_t size)
        {
            if (size < mSize)
                return;
            reserve(size + (size / 2));
            mSize = size;

            memset(mArr, NULL, mCapacity);
        }

        void push_back(T &value)
        {
            if (mSize > mCapacity)
            {
                mCapacity *= 2;
                T *newArr = new T[mCapacity];
                for (size_t i = 0; i < mSize; i++)
                {
                    newArr[i] = mArr[i];
                }
                delete[] mArr;
                newArr[mSize++] = value;
                mArr = newArr;
            }
        }

        void pop_back()
        {
            mSize = mSize > 0 ? mSize -= 1 : NULL;
        }
        void clear()
        {

            mSize = 0;
        }
        T &operator[](size_t idx)
        {
            if (mSize <= idx)
            {
                assert(NULL);
            }
            return mArr[idx];
        }

        int capacity() { return mCapacity; }
        int size() { return mSize; }
        bool empty() { return mSize == 0; }

        bool operator==(const vector &other) const
        {
            if (mSize != other)
                return false;
            for (size_t i = 0; i < mSize; i++)
            {
                if (mArr[i] != other[i])
                    return false;
            }
            return true;
        }

    private:
        T *mArr;
        int mCapacity;
        int mSize;
    };

}

int main()
{
    ya::vector<int> vector;
    std::vector<int> stdvector;
    stdvector.resize(10);
    stdvector.push_back(20000);
    stdvector.pop_back();

    int cap = stdvector.capacity();

    stdvector.clear();

    vector.resize(10);
    vector[0] = 100;
    vector[1] = 300;
    vector[9] = 400;
    vector.pop_back();

    std::cout << vector[1];
}
