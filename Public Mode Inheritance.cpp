// Aakash Choudhari
// 24070123031
// E&TC-A2


#include <iostream>
#include <string>

// Base class
class Vehicle {
public:
    std::string brand = "Ford";
    void color() {
        std::cout << "Red!\n";
    }
};

// Derived class
class Car : public Vehicle {
public:
    std::string model = "Mustang";
};

int main() {
    Car myCar;
    myCar.color();
    std::cout << myCar.brand << " " << myCar.model << std::endl;
    return 0;
}
