#include "main.h"

void setIntakeMotors(){
    if (controller.get_digital(pros::E_CONTROLLER_DIGITAL_R2))
    {
        intake = 127;
    }
    else if (controller.get_digital(pros::E_CONTROLLER_DIGITAL_R1))
    {
        intake = -127;
    }
    else
    {
        intake = 0;
    }
    
}
