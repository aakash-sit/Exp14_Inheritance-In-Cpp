// Aakash Choudhari
// 24070123031
// E&TC-A2


#include <iostream>
using namespace std;

// Parent Class
class Appliance {
protected:
    int price;  // Protected so derived classes can access if needed

public:
    // Function to input and display price
    void setPrice() {
        cout << "Enter the price of the appliance: ";
        cin >> price;
        cout << "Price: " << price << "\n";
    }

    // General purpose description
    virtual void Purpose() {  // Made virtual for proper polymorphism
        cout << "This is a generic appliance.\n";
    }

    // Getter for price (optional)
    int getPrice() const {
        return price;
    }
};

// Derived Class: Washing Machine
class WashingMachine : public Appliance {
public:
    void Purpose() override {  // Override parent function
        cout << "Purpose: Wash clothes.\n";
    }
};

// Derived Class: Microwave
class Microwave : public Appliance {
public:
    void Purpose() override {  // Override parent function
        cout << "Purpose: Cook food.\n";
    }
};

int main() {
    cout << "===== Washing Machine =====\n";
    WashingMachine w;
    w.setPrice();
    w.Purpose();                 // Calls derived class function
    w.Appliance::Purpose();      // Calls base class function

    cout << "\n===== Microwave =====\n";
    Microwave m;
    m.setPrice();
    m.Purpose();                 // Calls derived class function
    m.Appliance::Purpose();      // Calls base class function

    return 0;
}

]
