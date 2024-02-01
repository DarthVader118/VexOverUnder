#include "main.h"

#define FLAP_DOWN_PORT 'g'  
#define FLAP_UP_PORT 'h'  


// Motors
extern pros::Motor intake;
extern pros::Motor driveLeftBack;
extern pros::Motor driveLeftFront;
extern pros::Motor driveRightBack;
extern pros::Motor driveRightFront;
extern pros::Motor launcherMotor;

// Pistons
extern pros::ADIDigitalOut flapDown;
extern pros::ADIDigitalOut flapUp;

// // Motor Groups
// extern pros::Motor_Group leftDrive;
// extern pros::Motor_Group rightDrive;



extern pros::Controller controller;
