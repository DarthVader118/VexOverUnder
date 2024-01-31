// Include the main header file for the PROS library
#include "main.h"

// Assuming the solenoids for the flaps are named leftPiston and rightPiston

// Global variable to keep track of whether the flaps are expanded or not
bool flapsOut = false;

void setFlaps()
{
    if (controller.get_digital(DIGITAL_A))
    {
        if (flapsOut)
        {
            leftPiston.set_value(false);
            rightPiston.set_value(false);
            flapsOut = false;
        }
        else
        {
            leftPiston.set_value(true);
            rightPiston.set_value(true);
            flapsOut = true;
        }
    }
}







// // Function to set the state of the flaps
// void setFlapsExpanded(bool expanded) {
//     if (expanded) {
//         // If expanded is true, set the value of the pistons to true to expand the flaps
//         leftPiston.set_value(true);
//         rightPiston.set_value(true);
//     } else {
//         // If expanded is false, set the value of the pistons to false to retract the flaps
//         leftPiston.set_value(false);
//         rightPiston.set_value(false);
//     }
//     // Update the global variable areFlapsExpanded
//     areFlapsExpanded = expanded;
// }

// // Function to toggle the state of the flaps when the A button on the controller is pressed
// void toggleFlaps() {
//     if (controller.get_digital(DIGITAL_A)) {
//         // If the A button is pressed, toggle the state of the flaps
//         setFlapsExpanded(!areFlapsExpanded);
//     } 
// }
