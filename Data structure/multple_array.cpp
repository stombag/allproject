#include <iostream>

using namespace std;

int main()
{

    int arr[5] = {1, 3, 5, 2, 5};
    int input[3]= {1,5,6};
   

    for (size_t y = 0; y < 3; y++)
    {
        int count = 0;
        for (size_t x = 0; x < 5; x++)
        {
            if (arr[x] == input[y])
            {
                count++;
            }
        }
        cout << input[y] << ":" << count;
    }
    return 0;
}