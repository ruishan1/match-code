#include "vex.h"

using namespace vex;

void setdrive(double left, double right) 
{
    leftfrontop.spin(fwd, 0.12 * left, volt);
    leftfront.spin(fwd, 0.12 * left, volt);
    leftback.spin(fwd, 0.12 * left, volt);
    rightfrontop.spin(fwd, 0.12 * right, volt);
    rightfront.spin(fwd, 0.12 * right, volt);
    rightback.spin(fwd, 0.12 * right, volt);
}


void setcatapult()
{
    if (Controller.ButtonR1.pressing())
    {
        catapult.spin(fwd, -12, volt);
    }
    if (Controller.ButtonR2.pressing())
    {
        catapult.stop();
    }
}

void setwings()
{
   if (Controller.ButtonX.pressing())
   {
       wing.set(true);
       wait(5, msec);
   }
   else if (Controller.ButtonA.pressing())
   {
       wing.set(false);
       wait(5, msec);
   }
}

void setintake()
{
    if (Controller.ButtonL1.pressing())
    {
        intake.spin(fwd, 12, volt);
    }
    else if (Controller.ButtonL2.pressing())
    {
        intake.spin(fwd, -12, volt);
    }
    else
    {
        intake.stop();
    }
}