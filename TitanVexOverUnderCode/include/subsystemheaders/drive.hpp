#include "main.h"

void setDriveMotors(int left, int right);

void drive();

void resetDriveEncoders();

double avgDriveEncoderVal();
//auton functions

//translate - drive forwards and backwards
void translate(int units, int voltage);
