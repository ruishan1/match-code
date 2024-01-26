#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code
;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;
controller Controller = controller(primary);
motor leftfrontop = motor(PORT2, false);
motor leftfront = motor(PORT3, true);
motor leftback = motor(PORT6, true); 
motor rightfrontop = motor(PORT9, true);
motor rightfront = motor(PORT1, false);
motor rightback = motor(PORT19, false); 
motor catapult = motor(PORT12, false);
motor intake = motor(PORT4, false);
digital_out wing = digital_out(Brain.ThreeWirePort.H);

// VEXcode device constructors

// VEXcode generated functions



/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}