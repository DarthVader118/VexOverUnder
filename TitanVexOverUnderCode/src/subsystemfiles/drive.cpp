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