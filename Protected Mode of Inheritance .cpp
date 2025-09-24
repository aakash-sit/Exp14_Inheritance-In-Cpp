// Aakash Choudhari
// 24070123031
// E&TC-A2


#include <iostream>
#include <string>

// Base class
class Vehicle {
public:
    std::string brand = "Ford";
    void color() const {
        std::cout << "Red!\n";
    }
};

// Derived class
class Car : protected Vehicle {
public:
    std::string model = "Mustang";

    void showDetails() const {
        color(); // Allowed: protected inheritance makes color() a protected member of Car.
        std::cout << brand << " " << model << std::endl; // Allowed: brand is protected in Car.
    }
};

// Further derived class
class SportsCar : public Car {
public:
    void showSportsCar() const {
        color(); // Still allowed: color() is a protected member of Car and thus accessible here.
        std::cout << brand << " " << model << " [Sports Edition]" << std::endl; // brand is protected in Car.
    }
};

int main() {
    Car myCar;
    myCar.showDetails();

    SportsCar s;
    s.showSportsCar();

    /* The following are not allowed because protected inheritance hides them from external access.
    // myCar.color();
    // std::cout << myCar.brand;
    */

    return 0;
}
