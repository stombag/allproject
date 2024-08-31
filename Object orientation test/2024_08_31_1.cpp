#include <iostream>

using namespace std;

class parants
{
public:
    int age;
    int lengh;
    string name;
    void state()
    {
        std::cout << "나이 : " << age << '\n'
                  << "키 : " << lengh << '\n'
                  << "이름 : " << name << endl;
    }
};
int main()
{
    parants Mom;
    Mom.age = 50;
    Mom.lengh = 160;
    Mom.name = "장원영";
    Mom.state();

    parants Dad;
    Dad.age = 55;
    Dad.lengh = 170;
    Dad.name = "차은우";
    Dad.state();

    return 0;
}