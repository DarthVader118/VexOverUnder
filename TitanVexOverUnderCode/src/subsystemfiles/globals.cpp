#include "main.h"


#define FLAP_LEFT_PORT 7  // Replace 1 with the actual port number
#define FLAP_RIGHT_PORT 8 // Replace 2 with the actual port number


pros::Motor intake(1);
pros::Motor driveLeftBack(2);
pros::Motor driveLeftFront(3);
pros::Motor driveRightBack(4);
pros::Motor driveRightFront(5);

pros::ADIDigitalOut leftPiston (FLAP_LEFT_PORT);
pros::ADIDigitalOut rightPiston (FLAP_RIGHT_PORT);

pros::Controller controller(pros::E_CONTROLLER_MASTER);
