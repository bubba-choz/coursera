#include <iostream>
#include <cmath>
#include "sphere.h"

int main(){
    Sphere s;

    s.setRadius(4.2);
    double volume = s.getVolume();
    double surfaceArea = s.getSurfaceArea();
    std::cout<<"Volume is: "<<volume<<std::endl;
    std::cout<<"Surface Area is: "<<surfaceArea<<std::endl;

    

    return 0;
}