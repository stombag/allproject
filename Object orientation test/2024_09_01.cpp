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

    void setage(int newAge)
    {
        age = newAge;
    }
    int getage()
    {
        return age;
    }
};

int main()
{

    parents A;
    cout << A.getName() << endl;
    A.setage(20);
    cout << A.getage() << endl;
    return 0;
}
