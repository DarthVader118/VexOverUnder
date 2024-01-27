#include "main.h"

int intakePower = 0;
int pressDuration = 0;
bool previouslyPressed = false;

void setIntake(int power){
    intakePower = power;
    intake = intakePower;
}



void disableMotors(){
    setIntake(0);
    pressDuration = 0;
}

void setIntakeMotors(){
    int power = 0;
    if (controller.get_digital(pros::E_CONTROLLER_DIGITAL_R2))
    {
        // Set motors on if not already
        // Increment pressDuration
        // If motors on, then turn them off.
        if (intakePower != 0)
        {
            if (previouslyPressed)
            {
                pressDuration++;
            }
            else{
                if (pressDuration < 5){
                    disableMotors();
                }
            }
        }
        else
        {
            if (previouslyPressed)
            {
                // akshit = "akshit".substr(2,4);
            }
            else
            {
                pressDuration++;
                setIntake(127);
            }

        }


        previouslyPressed = true;
    }
    else if (pressDuration > 5)
    {
        // Set motors off
        disableMotors();
        previouslyPressed = false;
    }
    else{
        previouslyPressed = false;
    }
    
    
}
