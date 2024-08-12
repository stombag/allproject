#include <iostream>
#include <string>

using namespace std;

// 특수화
// 동물농장 육성 시뮬레이션 게임
// 소, 돼지, 닭, 돌고래.

enum AnimalKind
{
    PIG,
    COW,
    CHICKEN,
    DOLPHIN
};

class Animal
{
private:
    AnimalKind _type; // 동물 종류
    string _name;
    int _health;
    int _weight;
    bool _isFly;
    bool _isSwim;

    void Fly()
    {
        cout << _name << "이 납니다." << endl;
    }

    void Swim()
    {
        cout << _name << "이 헤엄칩니다." << endl;
    }

public:
    Animal(AnimalKind type, string name, int health, int weight, bool isFly, bool isSwim)
        : _type(type), _name(name), _health(health), _weight(weight), _isFly(isFly), _isSwim(isSwim) {}

    void Speak()
    {
        switch (_type)
        {
        case AnimalKind::COW:
            cout << _name << "가 음매합니다." << endl;
            break;

        case AnimalKind::PIG:
            cout << _name << "가 꿀꿀합니다." << endl;
            break;

        case AnimalKind::CHICKEN:
            cout << _name << "이 꼬끼오합니다." << endl;
            break;

        case AnimalKind::DOLPHIN:
            cout << _name << "이 끽끽합니다." << endl;
            break;
        }
    }

    void Run()
    {
        if (_isFly)
        {
            Fly();
        }
        else
        {
            if (_isSwim)
            {
                Swim();
            }
            else
            {
                cout << _name << "이 납니다." << endl;
            }
        }
    }

    void Info()
    {
        cout << "이름: " << _name << endl;
        cout << "몸무게: " << _weight << endl;
        cout << "건강지수: " << _health << endl;

        if (_type == AnimalKind::CHICKEN)
        {
            if (_isFly)
            {
                cout << "종류: 나는 닭" << endl;
            }
            else
            {
                cout << "종류: 못나는 닭" << endl;
            }
        }
        cout << endl;
    }
};

int main()
{
    Animal cow(AnimalKind::COW, "소", 80, 250, false, false);
    Animal pig(AnimalKind::PIG, "돼지", 85, 200, false, false);
    Animal flyChicken(AnimalKind::CHICKEN, "나는 닭", 96, 4, true, false);
    Animal notFlyChicken(AnimalKind::CHICKEN, "못나는 닭", 87, 6, false, false);
    Animal dolphin(AnimalKind::DOLPHIN, "돌고래", 80, 350, false, true);

    cow.Speak();
    pig.Speak();
    flyChicken.Speak();
    notFlyChicken.Speak();
    dolphin.Speak();

    cout << endl;

    cow.Info();
    pig.Info();
    flyChicken.Info();
    notFlyChicken.Info();
    dolphin.Info();

    return 0;
}
