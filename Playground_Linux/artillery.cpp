#include <iostream>
#include "math.h"

const int kNumShells = 10;
const int kMinDist = 200;
const int kMaxDist = 900;

const double kVelocity = 200.0;
const double kGravity  = 32.0;
const double kPi = 3.1415;

int DistanceCalc(double in_angle) 
{
    double time_in_air;
    
    time_in_air = (2.0 * kVelocity * sin(in_angle)) / kGravity;
    
    return (int) round((kVelocity * cos(in_angle)) * time_in_air);
}

int main()
{
    return 0;
}
