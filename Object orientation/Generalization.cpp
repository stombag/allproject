#include <iostream>
#include <string>

using namespace std;
// 상속
// 일반화
// 동물농장 시뮬레이션 게임.
// 소, 돼지, 닭, 양

class Stock {
private:
   string _name;   // 이름
   float _weight;   // 몸무게
   float _healthRate;   // 건강지수
   float _age;   // 나이

public:
   Stock(string name, float weight, float healthRate, float age)
      : _name(name), _weight(weight), _healthRate(healthRate), _age(age) {}

   string GetName() {
      return _name;
   }

   void Speak() {
      cout << _name << "가 말합니다." << endl;
   }

   void Run() {
      cout << _name << "가 뜁니다." << endl;
   }

   void Eat() {
      cout << _name << "가 먹습니다." << endl;
   }

   void Info() {
      cout << "이름: " << _name << endl;
      cout << "몸무게: " << _weight << endl;
      cout << "건강지수: " << _healthRate << endl;
      cout << "나이: " << _age << endl;
   }

};


class Cow : public Stock{
public:
   Cow(string name, float weight, float healthRate, float age)
      : Stock(name, weight, healthRate, age) {}

   void Speak() {
      cout << GetName() << "가 음매합니다." << endl;
   }
};

class Pig : public Stock {
public:
   Pig(string name, float weight, float healthRate, float age)
      : Stock(name, weight, healthRate, age) {}

   void Speak() {
      cout << GetName() << "가 꿀꿀합니다." << endl;
   }

};

class Chicken : public Stock{
private:
   bool _isFly;   // true: 나는 닭, false: 못나는 닭

   void Fly() {
      cout << GetName() << "이 납니다." << endl;
   }

public:
   Chicken(string name, float weight, float healthRate, float age, bool isFly)
      : Stock(name, weight, healthRate,  age), _isFly(isFly) {}

   void Speak() {
      cout << GetName() << "이 꼬끼오합니다." << endl;
   }


   void Run() {
      if (_isFly) {
         Fly();
      }
      else {
         cout << GetName() << "가 뜁니다." << endl;
      }
   }

   void Info() {
      Stock::Info();

      if (_isFly) {
         cout << "종류: 나는 닭" << endl;
      }
      else {
         cout << "종류: 못나는 닭" << endl;
      }
   }
};

class Sheep : public Stock {
private:
   bool _isKind;   // ture: 털양, false: 고기양

public:
   Sheep(string name, float weight, float healthRate, float age, bool isKind)
      : Stock(name, weight, healthRate, age), _isKind(isKind) {}

   void Speak() {
      cout << GetName() << "이 음메에에합니다." << endl;
   }

   void Info() {
      Stock::Info();

      if (_isKind) {
         cout << "종류: 털양" << endl;
      }
      else {
         cout << "종류: 고기양" << endl;
      }
   }
};

int main() {
   Cow cow("소", 250.0f, 80.0f, 2.4f);
   Pig pig("돼지", 210.0f, 70.0f, 1.8f);
   Chicken flyChicken("나는 닭", 5.0f, 60.0f, 1.2f, true);
   Chicken notFlyChicken("못나는 닭", 4.5f, 75.0f, 2.1f, false);
   Sheep purSheep("털양", 120.0f, 80.0f, 2.5f, true);
   Sheep beefSheep("고기양", 150.0f, 60.0f, 1.5f, false);

   cow.Speak();
   pig.Speak();
   flyChicken.Speak();
   notFlyChicken.Speak();
   purSheep.Speak();
   beefSheep.Speak();

   cout << endl;

   cow.Run();
   pig.Run();
   flyChicken.Run();
   notFlyChicken.Run();
   purSheep.Run();
   beefSheep.Run();

   cout << endl;
   flyChicken.Info();
   cout << endl;
   beefSheep.Info();


   return 0;
}