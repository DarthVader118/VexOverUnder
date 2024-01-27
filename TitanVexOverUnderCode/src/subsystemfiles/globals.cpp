#include "main.h"

pros::Motor intake(1);
pros::Motor driveLeftBack(2);
pros::Motor driveLeftFront(3);
pros::Motor driveRightBack(4);
pros::Motor driveRightFront(5);

pros::Motor flapLeftMotor(6); // Replace 6 with the actual port number
pros::Motor flapRightMotor(7); // Replace 7 with the actual port number

pros::Controller controller(pros::E_CONTROLLER_MASTER);