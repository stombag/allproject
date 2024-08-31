#include <iostream>

using namespace std;
class parants
{
private:
    int _age;
    int _length;
    string _name;

public:
    void state(int age, int length, string name)
    {
        _age = age;
        _length = length;
        _name = name;
        cout << _age << '\n'
             << _length << '\n'
             << _name << endl;
    }
};

int main()
{
    parants Mom1;

    Mom1.state(50, 160, "나강리");

    return 0;
}