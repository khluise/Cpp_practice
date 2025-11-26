#include <iostream>

int main() {
    const double PI =  3.14159;
    double radius = 5;
    double height = 10;

    double volumeForCylinder = PI * radius * radius * height;
    double volumeForCone = volumeForCylinder / 3.;

    std::cout << "The volume of a CYLINDER with radius=" << radius << \
        " height=" << height << " is equal: " << volumeForCylinder << '\n';
    std::cout << "The volume of a CONE with radius=" << radius << \
        " height=" << height << " is equal: " << volumeForCone << '\n'; 

    return 0;
}

