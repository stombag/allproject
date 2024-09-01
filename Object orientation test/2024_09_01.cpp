#include <iostream>

using namespace std;

class parents
{
private:
    int age = 10;
    string name = "김민혁";

public:
    string getName()
    {
        return name;
    }
    int getage()
    {
        return age;
    }
};

int main()
{

    parents A;
    cout << A.getage() << endl;
    cout << A.getName() << endl;

    return 0;
}
