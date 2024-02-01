#include "main.h"


// auto globalTime = std::chrono::high_resolution_clock::now();

// bool turning = false;
// float calculatedTurningTime = 0.0;

void setDriveMotors(int left, int right){
    driveLeftBack = left;
    driveLeftFront = left;
    driveRightBack = right;
    driveRightFront = right;
}

void drive(){
    int left = controller.get_analog(ANALOG_LEFT_Y);
    int right = controller.get_analog(ANALOG_RIGHT_Y);

    if (abs(left) < 5){
        left = 0;
    }

    if(abs(right) < 5){
        right = 0;
    }
    setDriveMotors(left, -right);
}

// //reset motors to 0 pos
// void resetDriveEncoders(){
//     driveLeftBack.tare_position();
//     driveRightBack.tare_position();
//     driveLeftFront.tare_position();
//     driveRightFront.tare_position();
// }

// double avgDriveEncoderVal() {
//     return (fabs(driveLeftFront.get_position()) + 
//            fabs(driveRightFront.get_position()) + 
//            fabs(driveLeftBack.get_position()) + 
//            fabs(driveLeftBack.get_position())) / 4;
// }

// //auton drive methods
// void move(int units, int voltage){

//     //set direction based on units sign (+ or -)
//     int dir = abs(units)/units; //either 1 or -1 (1 = forward, -1 = backward)

//     resetDriveEncoders();

//     //drive forward for a distance of units
//     while(avgDriveEncoderVal() 
    
//     < abs(units)){
//         setDriveMotors(voltage * dir, voltage * dir);
//         pros::delay(10);
//     }

//     //brake/stop
//     setDriveMotors(-10 * dir, -10 * dir);
//     pros::delay(80);
    
//     //set back to neutral
//     setDriveMotors(0, 0);
// }

// void move(pros::Motor_Group motorGroup, int units, int voltage){

//     //set direction based on units sign (+ or -)
//     int dir = abs(units)/units; //either 1 or -1 (1 = forward, -1 = backward)

//     resetDriveEncoders();

//     //drive forward for a distance of units
//     while(avgDriveEncoderVal() < abs(units)){
//         setDriveMotors(voltage * dir, voltage * dir);
//         pros::delay(10);
//     }

//     //brake/stop
//     setDriveMotors(-10 * dir, -10 * dir);
//     pros::delay(80);
    
//     //set back to neutral
//     setDriveMotors(0, 0);
// }

// void rotateLeft(int degrees, int voltage){
//     /*resetDriveEncoders();
//     auto start = std::chrono::high_resolution_clock::now();
//     if (turning)
//     {
        
//     }*/
//     resetDriveEncoders();
//     while(avgDriveEncoderVal() < degrees){
//         setDriveMotors(-voltage, voltage);
//         pros::delay(10);
//     }
// }

// void rotateRight(int degrees, int voltage){
//     resetDriveEncoders();
//     int l = 1;
//     while(avgDriveEncoderVal() < degrees * l){
//         setDriveMotors(voltage, -voltage);
//         pros::delay(10);
//     }
// }