#include <iostream>
#include <string>

using namespace std;

template <typename T>
class DynamicArray
{
private:
    int _size;
    T *_parr;

public:
    DynamicArray(int size)
        : _size(size)
    {
        _parr = new T[_size];
    }

    DynamicArray(DynamicArray &ref)
        : _size(ref._size)
    {
        _parr = new T[_size]; // 동적배열을 따로 만든다.

        // 인자로 들어온 ref의 동적배열에 있는 값을 새롭게 만든 동적배열에 복사한다.

        for (int i = 0; i < _size; i++)
        {
            _parr[i] = ref._parr[i];
        }
    }

    ~DynamicArray()
    {
        delete[] _parr;
    }

    // 배열첨자 연산자를 연산자 오버로딩
    T &operator[](int index)
    {
        return _parr[index];
    }

    int GetSize()
    {
        return _size;
    }
};

int main()
{

    DynamicArray<int> array(10);

    for (int i = 0; i < array.GetSize(); i++)
    {
        array[i] = i;
        // array.operator[](i) = i;
    }

    for (int i = 0; i < array.GetSize(); i++)
    {
        cout << "array[" << i << " ] = " << array[i] << endl;
    }

    DynamicArray<float> array2(10);
    for (int i = 0; i < array2.GetSize(); i++)
    {
        array2[i] = i * 1.2f;
        // array.operator[](i) = i;
    }

    for (int i = 0; i < array2.GetSize(); i++)
    {
        cout << "array2[" << i << " ] = " << array2[i] << endl;
    }

    return 0;
}