#include "main.h"

// int prevTime = 0;

// int getPassed(int prevTime){
//     int currentTIme = pros::millis();
//     return prevTime;
// }

int FULL_ROTATION_TIME = 1150;

void forwardAuton(int time){
    // Assuming leftMotor and rightMotor are your motor variables
    // Set right motor to full power
    setDriveMotors(127, 127);

    pros::delay(time * 1000); // Wait for the specified amount of time

    setDriveMotors(0, 0); // Stop right motor
}

void turnLeft(int degrees){
    int time = (FULL_ROTATION_TIME / 360) * degrees;
    // Assuming leftMotor and rightMotor are your motor variables
    setDriveMotors(-127, 127); // Set left motor to full power, Set right motor to full power

    pros::delay(time); // Wait for the specified amount of time

    setDriveMotors(0, 0); // Stop motors
}

void turnRight(int degrees){
    int time = (FULL_ROTATION_TIME / 360) * degrees;
    // Assuming leftMotor and rightMotor are your motor variables
    setDriveMotors(127, -127); // Set left motor to full power, Set right motor to full power

    pros::delay(time); // Wait for the specified amount of time

    setDriveMotors(0, 0); // Stop motors
}



// void forwardAuton() {
//     // Assuming the motors are defined in "include/subsystemheaders/globals.hpp"
//     // and are named driveLeftFront, driveLeftBack, driveRightFront, and driveRightBack

//     // Move 100 units forward
//     driveLeftFront.move_absolute(100, 100);
//     driveLeftBack.move_absolute(100, 100);
//     driveRightFront.move_absolute(100, 100);
//     driveRightBack.move_absolute(100, 100);

//     // Wait until the motors reach their target
//     while (!((driveLeftFront.get_position() < 105) && (driveLeftFront.get_position() > 95)) ||
//            !((driveLeftBack.get_position() < 105) && (driveLeftBack.get_position() > 95)) ||
//            !((driveRightFront.get_position() < 105) && (driveRightFront.get_position() > 95)) ||
//            !((driveRightBack.get_position() < 105) && (driveRightBack.get_position() > 95))) {
//         pros::delay(2);
//     }

//     // Stop the motors
//     driveLeftFront.move_velocity(0);
//     driveLeftBack.move_velocity(0);
//     driveRightFront.move_velocity(0);
//     driveRightBack.move_velocity(0);

//     // Wait for a moment
//     pros::delay(1000);
// }