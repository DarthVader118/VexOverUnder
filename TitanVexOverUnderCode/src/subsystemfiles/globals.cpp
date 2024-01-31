#include "main.h"


#define FLAP_LEFT_PORT 'h'  // Replace 1 with the actual port number
#define FLAP_RIGHT_PORT 'g' // Replace 2 with the actual port number


pros::Motor intake(1);
pros::Motor driveLeftBack(2);
pros::Motor driveLeftFront(3);
pros::Motor driveRightBack(4);
pros::Motor driveRightFront(5);

pros::Motor_Group leftDrive(pros:: Motor driveLeftFront, pros::Motor driveLeftBack);
pros::Motor_Group rightDrive(pros:: Motor driveRightFront, pros::Motor driveRightBack);


pros::ADIDigitalOut leftPiston (FLAP_LEFT_PORT);
pros::ADIDigitalOut rightPiston (FLAP_RIGHT_PORT);

pros::Controller controller(pros::E_CONTROLLER_MASTER);
