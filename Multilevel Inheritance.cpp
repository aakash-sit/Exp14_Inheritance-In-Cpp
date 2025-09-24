// Aakash Choudhari
// 24070123031
// E&TC-A2


#include <iostream>

class Vehicle {
public:
    void show() {
        std::cout << "I am a Vehicle\n";
    }
};

class Car : public Vehicle {
public:
    void showCar() {
        std::cout << "I am a Car\n";
    }
};

class ElectricCar : public Car {
public:
    void showElectric() {
        std::cout << "I am an Electric Car\n";
    }
};

int main() {
    ElectricCar e;
    e.show();
    e.showCar();
    e.showElectric();
    return 0;
}
