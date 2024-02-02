#include "main.h"
#include "subsystemfiles\globals.cpp"

// void redLeftCorner(){
//     //move(100, 100)(something, something)
//     move(100, 100);
//     //^^ input measured values based on map
// }

// void redRightCorner(){
//     //move(100, 100)(something, something)
//     move(100, 100);
//     //^^ input measured values based on map
// }

// void blueLeftCorner(){
//     //move(100, 100)(something, something)
//     move(100, 100);
//     //^^ input measured values based on map
// }

// void blueRightCorner(){
//     //move(100, 100)(something, something)
//     move(100, 100);
//     //^^ input measured values based on map
// }


// void autonomous(){
//     redLeftCorner();
//     redRightCorner();
//     blueLeftCorner();
//     blueRightCorner();
// }

#define MOTOR_MAX_SPEED 100

void driveAuton(int units){
    /*driveLeftBack.move_relative(units, MOTOR_MAX_SPEED);
    driveRightBack.move_relative(units, MOTOR_MAX_SPEED);
    driveLeftFront.move_relative(units, MOTOR_MAX_SPEED);
    driveRightFront.move_relative(units, MOTOR_MAX_SPEED);*/
    leftDrive.move_relative(units, MOTOR_MAX_SPEED);
    rightDrive.move_relative(units, MOTOR_MAX_SPEED);
}

void turnLeft(int units){
    rightDrive.move_relative(units, MOTOR_MAX_SPEED);
    leftDrive.move_relative(-units, MOTOR_MAX_SPEED);
}

void turnRight(int units){
    rightDrive.move_relative(-units, MOTOR_MAX_SPEED);
    leftDrive.move_relative(units, MOTOR_MAX_SPEED);
}

void runLauncher(){
    launcherMotor = -127; // Replace 127 with the speed you want
    pros::delay(1100); // Wait for a fixed time (1 second in this case)
    launcherMotor = 0; // Stop the launcher
}

void test(){
    driveAuton(100);
    turnLeft(20);
    driveAuton(50);
    turnRight(20);
}