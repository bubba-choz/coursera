#include <iostream>
#include <cmath>
#include "sphere.h"

double Sphere::getVolume(){
    return (4/3)*M_PI*pow(radius_,3);
}

double Sphere::getSurfaceArea(){
    return 4*M_PI*pow(radius_,2);
}

void Sphere::setRadius(double radius){
    radius_ = radius;
}