#include <iostream>

using namespace std;

// 다형성
// 개발자 되었습니다.
// 커피숖 관리 프로그램 개발 의뢰를 받았습니다.
// 커피숖에 가서 커피 한잔을 시키고 앉아서 커피숖의
// 업무 흐름을 파악해야 하니다.
// 업무 흐름안에는 역활과 그 역활에따른 책임.

// 커피숖안에는 어떤 역활이 있나요?
// Cashier, Barista, guest

/*
class Drink {
private:
   string _name;

public:
   Drink()
      : _name("음료") {}

   string GetName() {
      return _name;
   }
};

class Coffee : public Drink {
private:
   string _name;

public:
   Coffee()
      : _name("Coffee")
   {

   }

   string GetName() {
      return _name;
   }
};


class Aid : public Drink {
private:
   string _name;

public:
   Aid()
      : _name("Aid")
   {

   }

   string GetName() {
      return _name;
   }

};

class Latte : public Drink {
private:
   string _name;

public:
   Latte()
      : _name("Latte")
   {

   }

   string GetName() {
      return _name;
   }
};

class Cola : public Drink {
private:
   string _name;

public:
   Cola()
      : _name("Cola")
   {

   }

   string GetName() {
      return _name;
   }
};
*/

// 순수가상함수를 하나라도 가지고 있는 클래스를 추상클래스
// 추상클래스 자신의 객체를 만들 수 없습니다.
// 자신의 순수가상함수를 자식들이 구현하도록 강제하는 능력이 생깁니다.
class Drink
{
private:
    string _name;

public:
    Drink(string name)
        : _name(name) {}

    string GetName()
    {
        return _name;
    }

    virtual void MakeADrink() = 0; // 순수가상함수
};

class Coffee : public Drink
{

public:
    Coffee()
        : Drink("Coffee")
    {
    }

    void MakeADrink() override
    {
        cout << "커피음료를 만듭니다." << endl;
    }
};

class Aid : public Drink
{
public:
    Aid()
        : Drink("Aid")
    {
    }

    void MakeADrink() override
    {
        cout << "에이드음료를 만듭니다." << endl;
    }
};

class Latte : public Drink
{
public:
    Latte()
        : Drink("Latte")
    {
    }

    void MakeADrink() override
    {
        cout << "라떼음료를 만듭니다." << endl;
    }
};

class Cola : public Drink
{
public:
    Cola()
        : Drink("Cola")
    {
    }

    void MakeADrink() override
    {
        cout << "콜라음료를 만듭니다." << endl;
    }
};

class Tea : public Drink
{
public:
    Tea()
        : Drink("Tea")
    {
    }

    void MakeADrink() override
    {
        cout << "차음료를 만듭니다." << endl;
    }
};

class Barista
{
public:
    void MakeADrink(Drink &drink)
    {
        drink.MakeADrink();
    }
};

class Cashier
{
private:
    Barista &_refBari;

public:
    Cashier(Barista &refBari)
        : _refBari(refBari) {}

    void OrderedDrink(Drink &drink)
    {
        cout << drink.GetName() << " 주문을 받습니다." << endl;
        _refBari.MakeADrink(drink);
    }
};

class Guest
{
public:
    void OrderingDrink(Cashier &cashier, Drink &drink)
    { // 의존적관계(Dependency) , 일시적인 관계
        cout << drink.GetName() << " 주문을 합니다." << endl;

        cashier.OrderedDrink(drink);
    }
};

int main()
{
    Coffee coffee;
    Aid aid;
    Latte latte;
    Cola cola;
    Tea tea;

    Barista bari;
    Cashier cashier(bari);
    Guest guest;

    guest.OrderingDrink(cashier, coffee);
    cout << endl;
    guest.OrderingDrink(cashier, aid);
    cout << endl;
    guest.OrderingDrink(cashier, latte);
    cout << endl;
    guest.OrderingDrink(cashier, cola);
    cout << endl;
    guest.OrderingDrink(cashier, tea);
    cout << endl;

    return 0;
}