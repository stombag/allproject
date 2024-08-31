#include <iostream>

using namespace std;

class parants
{
public:
    void mom()
    {
        int age = 10;
        int lengh = 10;
        string name = "김홍도";

        std::cout << "나이 : " << age << '\n'
                  << "키 : " << lengh << '\n'
                  << "이름 : " << name << endl;
    }
};
int main()
{
    parants Mom;
    Mom.mom();

    return 0;
}