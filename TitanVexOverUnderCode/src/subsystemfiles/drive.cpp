#include "main.h"

void setDriveMotors(int left, int right){
    driveLeftBack = left;
    driveLeftFront = left;
    driveRightBack = right;
    driveRightFront = right;
}

void drive(){
    int left = controller.get_analog(ANALOG_LEFT_Y);
    int right = controller.get_analog(ANALOG_RIGHT_Y);

    if (abs(left) < 10){
        left = 0;
    }

    if(abs(right) < 10){
        right = 0;
    }
    setDriveMotors(left, -right);
}

void resetDriveEncoders(){
    driveLeftBack.tare_position();
    driveRightBack.tare_position();
    driveLeftFront.tare_position();
    driveRightFront.tare_position();
}

//auton drive methods
void translate(int units, int voltage){
    //reset motor encoders to 0
    resetDriveEncoders();

    //drive forward for units distance
    while(driveLeftFront.get_position() < units){
        setDriveMotors(voltage, voltage);
        pros::delay(10);
    }

    //brake
    setDriveMotors(-10, -10);
    pros::delay(80);
    
    //drive back to neutral
    setDriveMotors(0, 0);

}