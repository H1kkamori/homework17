#pragma once
#include <cmath>

class Vector {
private:
    double x, y, z;

public:
    Vector(double x, double y, double z) : x(x), y(y), z(z) 
    {}

    void getValues(double& x, double& y, double& z) const 
    {
        x = this->x;
        y = this->y;
        z = this->z;
    }

    double length() const 
    {
        return std::sqrt(x * x + y * y + z * z);
    }
};

