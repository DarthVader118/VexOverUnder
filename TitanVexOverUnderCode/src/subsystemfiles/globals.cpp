#include "main.h"


// #define FLAP_LEFT_PORT 'h'  // Replace 1 with the actual port number
// #define FLAP_RIGHT_PORT 'g' // Replace 2 with the actual port number


pros::Motor intake(11);
pros::Motor driveLeftBack(12);
pros::Motor driveLeftFront(13);
pros::Motor driveRightBack(14);
pros::Motor driveRightFront(15);
pros::Motor launcherMotor(16);

// pros::Motor_Group leftDrive(pros:: Motor driveLeftFront, pros::Motor driveLeftBack);
// pros::Motor_Group rightDrive(pros:: Motor driveRightFront, pros::Motor driveRightBack);

pros::ADIDigitalOut flapUp (FLAP_UP_PORT);
pros::ADIDigitalOut flapDown (FLAP_DOWN_PORT);

pros::Controller controller(pros::E_CONTROLLER_MASTER);
