#include "main.h"

// Assuming the motor for the launcher is named launcherMotor
// and the button to control the launcher is BUTTON_A

bool isLauncherActive = false;

void toggleLauncher() {
    if (controller.get_digital(DIGITAL_A)) {
        isLauncherActive = !isLauncherActive; // Toggle the state of the launcher
    }

    if (isLauncherActive) {
        // Launch the ball
        launcherMotor = 127; // Replace 127 with the speed you want
        pros::delay(1000); // Wait for a fixed time (1 second in this case)
        launcherMotor = 0; // Stop the launcher
    } else {
        // Stop the launcher
        launcherMotor = 0;
    }
}

void opcontrol() {
    while (true) {
        toggleLauncher();
        pros::delay(20);
    }
}