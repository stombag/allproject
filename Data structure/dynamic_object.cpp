#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

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

   void Info() {
      cout << "이름: " << _name << endl;
      cout << "화력: " << _firePower << endl;
      cout << "남은 포탄수: " << _fireCount << endl << endl;
   }

};

int main() {
   int tankCount = 0;
   char buff[100];

   cout << "만들 탱크의 댓수를 입력하세요: ";
   cin >> tankCount;

   Tank** pTankArray = new Tank * [tankCount];   // 포인터 배열(Tank* 저장하는 배열)

   for (int i = 0; i < tankCount; i++) {
      sprintf(buff, "탱크_%d", i);
      pTankArray[i] = new Tank(buff, 80, 20);
   }

   for (int i = 0; i < tankCount; i++) {
      pTankArray[i]->Info();
   }

   cout << endl;
   for (int i = 0; i < tankCount; i++) {
      pTankArray[i]->Shoot();
   }

   // 동적객체 반환처리
   // 각각에 저장된 동적객체 반환처리
   for (int i = 0; i < tankCount; i++) {
      delete pTankArray[i];
   }

   delete[] pTankArray;   // 포인터 배열 반환처리


}