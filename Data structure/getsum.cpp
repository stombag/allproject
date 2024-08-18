#include <iostream>
using namespace std;

int vect[9] = {1, 6, 5, 6, 8, 1, 3, 2, 1};

int getsum(int target)
{
    int sum = 0;
    for (int i = target; i < target + 4; i++)
    {
        sum += vect[i];
    }

    return sum;
}
int main()
{
    int idx = 0;

    cin >> idx;
    int ret = getsum(idx);
    cout << ret << endl;
}