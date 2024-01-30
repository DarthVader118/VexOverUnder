#include "main.h"


#define FLAP_LEFT_PORT 7  // Replace 1 with the actual port number
#define FLAP_RIGHT_PORT 8 // Replace 2 with the actual port number


pros::Motor intake(1);
pros::Motor driveLeftBack(2);
pros::Motor driveLeftFront(3);
pros::Motor driveRightBack(4);
pros::Motor driveRightFront(5);

<<<<<<< HEAD
pros::Motor_Group leftDrive(pros:: Motor driveLeftFront, pros::Motor driveLeftBack);
pros::Motor_Group rightDrive(pros:: Motor driveRightFront, pros::Motor driveRightBack);

pros::Motor flapLeftMotor(6); // Replace 6 with the actual port number
pros::Motor flapRightMotor(7); // Replace 7 with the actual port number
=======
pros::ADIDigitalOut leftPiston (FLAP_LEFT_PORT);
pros::ADIDigitalOut rightPiston (FLAP_RIGHT_PORT);
>>>>>>> ee5780cd26519cddb468cdc81e26b16dead47fe9

pros::Controller controller(pros::E_CONTROLLER_MASTER);
