#include "main.h"


// auto globalTime = std::chrono::high_resolution_clock::now();

// bool turning = false;
// float calculatedTurningTime = 0.0;


void setDriveMotors(int left, int right){
    driveLeftBack = -left;
    driveLeftFront = -left;
    driveLeftMiddle = -left;
    driveRightBack = right;
    driveRightFront = right;
    driveRightMiddle = right;
}


void drive(){
    // if (controller.get_digital(DIGITAL_DOWN)){
    //     toggleReverse();
    // }


    int right = controller.get_analog(ANALOG_LEFT_Y);
    int left = controller.get_analog(ANALOG_RIGHT_Y);

    if (abs(left) < 5){
        left = 0;
    }

    if(abs(right) < 5){
        right = 0;
    }

    setDriveMotors(left, right);
}

