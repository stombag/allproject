#include <iostream>

bool IsSame(char *strA, char *strB)
{
    for (int i = 0; i < 256; i++)
    {
        if (strA[i] != strB[i]) // 하나라도 다르면 굳이 더이상 뒷부분을 체크할필요가 없다.
        {
            return false;
        }
    }

    return true;
}

int main()
{
    char strA[256] = "ABCD";
    char strB[256] = "ABCD";

    bool chekck = IsSame(strA, strB);

    if (chekck)
    {
        std::cout << "***Same***" << std::endl;
    }
    else
    {
        std::cout << "***Different***" << std::endl;
    }

    return 0;
}