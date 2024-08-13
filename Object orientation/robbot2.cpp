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
   Arm *_pleftArm;
   Arm *_prightArm;

public:
   Robot(Arm *pLeftArm, Arm *pRightArm)
       : _pleftArm(pLeftArm), _prightArm(pRightArm)
   {
   }

   void SetLeftArm(Arm *pLeftArm)
   {
      _pleftArm = pLeftArm;
   }

   void SetRightArm(Arm *pRightArm)
   {
      _prightArm = pRightArm;
   }

   void ShowInfo()
   {
      cout << endl;
      cout << "Robot: " << endl;
      cout << "왼쪽팔: ";
      _pleftArm->ShowInfo();
      cout << endl;
      cout << "오른쪽팔: ";
      _prightArm->ShowInfo();
      cout << endl;
   }
};

int main()
{
   RocketArm rocketArm;
   CannonArm cannonArm;
   LazerArm lazerArm;

   Robot cannonArmRobot(&cannonArm, &cannonArm);
   Robot rocketArmRobot(&rocketArm, &rocketArm);
   Robot lazerArmRobot(&lazerArm, &lazerArm);
   Robot leftLazerArmRightCannonArmRobot(&lazerArm, &cannonArm);

   cannonArmRobot.ShowInfo();
   rocketArmRobot.ShowInfo();
   lazerArmRobot.ShowInfo();

   leftLazerArmRightCannonArmRobot.ShowInfo();
   leftLazerArmRightCannonArmRobot.SetRightArm(&rocketArm);

   leftLazerArmRightCannonArmRobot.ShowInfo();

   return 0;
}
// 포함