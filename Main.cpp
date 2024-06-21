#include <iostream>
#include "Vector.h"

int main() {
     Vector v(3.0, 4.0, 5.0);

    double x, y, z;
    v.getValues(x, y, z);
    std::cout << "Vector components: x = " << x << ", y = " << y << ", z = " << z << std::endl;

    double len = v.length();
    std::cout << "Vector length: " << len << std::endl;

    return 0;
}
