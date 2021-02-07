#pragma once

class Sphere{
    public:
        double getVolume();
        double getSurfaceArea();
        void setRadius(double radius);
    
    private:
        double radius_;
};