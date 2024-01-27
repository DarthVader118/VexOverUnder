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
        if (controller.get_digital(pros::E_CONTROLLER_DIGITAL_R1))
        {
            disableMotors();
            previouslyPressed = false;
        }
        else
        {
            power = 127;
        }
    }
    else if (controller.get_digital(pros::E_CONTROLLER_DIGITAL_R1))
    {
        power = -127;
    }
    if (power != 0)
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
                if (pressDuration < 15){
                    disableMotors();
                }
            }
        }
        else if (!previouslyPressed)
        {
            
            pressDuration++;
            setIntake(power);
            // akshit = "akshit".substr(2,4);
        
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
