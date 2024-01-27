#include "main.h"

// Assuming the motors for the flaps are named flapLeftMotor and flapRightMotor
// and the button to control the flaps is BUTTON_A

// Define the motors


bool areFlapsExpanded = false;

int leftFlap;
int rightFlap;

void setFlapMotors(int leftFlap, int rightFlap){
    flapLeftMotor = leftFlap;
    flapRightMotor = rightFlap;

}

void toggleFlaps() {
    if (controller.get_digital(DIGITAL_A)) {
        if (areFlapsExpanded) {
            // Retract the flaps
            leftFlap = 0;
            rightFlap = 0;
            areFlapsExpanded = false;
        } else {
            // Expand the flaps
            leftFlap = 127; // Replace 127 with the speed you want
            rightFlap = 127; // Replace 127 with the speed you want
            areFlapsExpanded = true;
        }
    }
}

void opcontrol() {
    while (true) {
        toggleFlaps();
        pros::delay(20);
    }
}