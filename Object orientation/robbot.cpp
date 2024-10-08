#include <iostream>

using namespace std;

class Arm
{
private:
   string _name;

public:
   Arm(string name)
       : _name(name) {}

   void ShowInfo()
   {
      cout << _name;
   }
};

class CannonArm : public Arm
{
public:
   CannonArm()
       : Arm("CannonArm") {}
};

class RocketArm : public Arm
{
public:
   RocketArm()
       : Arm("RocketArm") {}
};

class LazerArm : public Arm
{
public:
   LazerArm()
       : Arm("LazerArm") {}
};

class Robot
{
private:
   Arm &_leftArm;
   Arm &_rightArm;

public:
   Robot(Arm &leftArm, Arm &rightArm)
       : _leftArm(leftArm), _rightArm(rightArm)
   {
   }

   void ShowInfo()
   {
      cout << endl;
      cout << "Robot: " << endl;
      cout << "왼쪽팔: ";
      _leftArm.ShowInfo();
      cout << endl;
      cout << "오른쪽팔: ";
      _rightArm.ShowInfo();
      cout << endl;
   }
};

class CannonArmRobot : public Robot
{
public:
   CannonArmRobot(CannonArm &leftArm, CannonArm &rightArm)
       : Robot(leftArm, rightArm)
   {
   }
};

class RocketArmRobot : public Robot
{
public:
   RocketArmRobot(RocketArm &leftArm, RocketArm &rightArm)
       : Robot(leftArm, rightArm)
   {
   }
};

class LazerArmRobot : public Robot
{
public:
   LazerArmRobot(LazerArm &leftArm, LazerArm &rightArm)
       : Robot(leftArm, rightArm) {}
};

int main()
{
   RocketArm rocketArm;
   CannonArm cannonArm;
   LazerArm lazerArm;

   CannonArmRobot cannonArmRobot(cannonArm, cannonArm);
   RocketArmRobot rocketArmRobot(rocketArm, rocketArm);
   LazerArmRobot lazerArmRobot(lazerArm, lazerArm);

   cannonArmRobot.ShowInfo();
   rocketArmRobot.ShowInfo();
   lazerArmRobot.ShowInfo();

   return 0;
}
// 상속