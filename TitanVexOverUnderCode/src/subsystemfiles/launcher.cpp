#include "main.h"

// Assuming the motor for the launcher is named launcherMotor
// and the button to control the launcher is BUTTON_A

bool isLauncherActive = false;

void toggleLauncher() {
    if (controller.get_digital(DIGITAL_UP)) {
        // Launch the ball
        launcherMotor = 85; // Replace 127 with the speed you want
        intake = -85;
        pros::delay(1100); // Wait for a fixed time (1 second in this case)
        launcherMotor = 0; // Stop the launcher
    } else {
        // Stop the launcher
        launcherMotor = 0;
    }
}
