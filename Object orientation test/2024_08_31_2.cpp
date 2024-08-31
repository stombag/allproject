#include <iostream>

using namespace std;

class Mom
{
private:
    int age;
    string name;

public:
    void state()
    {
        cin >> age;
        cin >> name;
        cout << age << name << endl;
    }
};

int main()
{

    Mom a;
    a.state();
    return 0;
};