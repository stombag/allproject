#include <iostream>

using namespace std;

class CannonArm {
private:
   string _name;

public:
   CannonArm()
      : _name("CannonArm") {}

   void ShowInfo() {
      cout << _name;
   }
};

class RocketArm {
private:
   string _name;

public:
   RocketArm()
      : _name("RocketArm") {}

   void ShowInfo() {
      cout << _name;
   }
};

class CannonArmRobot {
private:
   CannonArm _leftArm;
   CannonArm _rightArm;

public:
   CannonArmRobot(){}

   void ShowInfo() {
      cout << endl;
      cout << "CannonArmRobot: " << endl;
      cout << "왼쪽팔: ";
      _leftArm.ShowInfo();
      cout << endl;
      cout << "오른쪽팔: ";
      _rightArm.ShowInfo();
      cout << endl;
   }

};

class RocketArmRobot {
private:
   RocketArm _leftArm;
   RocketArm _rightArm;

public:
   RocketArmRobot() {}

   void ShowInfo() {
      cout << endl;
      cout << "RocketArmRobot: " << endl;
      cout << "왼쪽팔: ";
      _leftArm.ShowInfo();
      cout << endl;
      cout << "오른쪽팔: ";
      _rightArm.ShowInfo();
      cout << endl;
   }

};


int main() {
   CannonArmRobot cannonArmRobot;
   RocketArmRobot rocketArmRobot;

   cannonArmRobot.ShowInfo();
   rocketArmRobot.ShowInfo();



   return 0;
}