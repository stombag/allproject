#include <iostream>
#include <string>

using namespace std;

// 동적객체

class Tank {
private:
   string _name;
   int _firePower;
   int _fireCount;

public:
   Tank()
      : _name(""), _firePower(0), _fireCount(0) {}

   Tank(string name, int firePower, int fireCount)
      : _name(name), _firePower(firePower), _fireCount(fireCount)
   {
      cout << "Tank 인자를 받는 생성자" << endl;
   }

   ~Tank() {
      cout << "Tank 소멸자" << endl;
   }

   void Init(string name, int firePower, int fireCount) {
      _name = name;
      _firePower = firePower;
      _fireCount = fireCount;
   }

   void Shoot() {
      cout << _name << "이 " << _firePower << "로 포탄을 발사합니다." << endl;
      _fireCount--;

      cout << "남아있는 포탄은 " << _fireCount << "입니다." << endl << endl;
   }

};

int main() {
   // C++에서는 동적메모리를 할당받을때 
   // new 연산자를 사용합니다.
   int* pa = new int;   // 동적 메모리 공간 할당

   *pa = 2000; //주소값에 사용하는 *(asterik)는 포인터 연산자

   delete pa;    // 할당받은 동적메모리 공간을 반납처리

   // 객체를 동적으로 할당할때는 반드시 new 연산자를 사용해야 합니다.
   // new 연산자는 객체를 할당할때 생성자 자동으로 호출 시켜 줍니다.

   Tank* ptank = new Tank("탱크", 100, 20);   // new 연산자로 동적객체 할당

   // 객체의 주소값으로 멤버에 접근할때는 ->(화살표 연산자)를 사용해야 합니다.
   ptank->Shoot();   


   delete ptank; // 소멸자가 호출되면서 메모리의 반한이 처리가 됩니다.


   return 0;
}