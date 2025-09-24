// Aakash Choudhari
// 24070123031
// E&TC-A2


#include <iostream>
#include <string>

// Base class for personal details
class PersonalInfo {
protected:
    std::string name;
    int age;

public:
    void readPersonal() {
        std::cout << "Enter name and age: ";
        std::cin >> name >> age;
    }

    void displayPersonal() const {
        std::cout << "Name : " << name << "\n";
        std::cout << "Age : " << age << "\n";
    }
};

// Base class for academic details
class AcademicInfo {
protected:
    int prn;
    float marks;

public:
    void readAcademic() {
        std::cout << "Enter PRN and marks: ";
        std::cin >> prn >> marks;
    }

    void displayAcademic() const {
        std::cout << "PRN : " << prn << "\n";
        std::cout << "Marks : " << marks << "\n";
    }
};

// Derived class Student inherits from both PersonalInfo and AcademicInfo
class Student : public PersonalInfo, public AcademicInfo {
public:
    void displayStudent() const {
        std::cout << "\n--- Student Details ---\n";
        displayPersonal();
        displayAcademic();
    }
};

int main() {
    Student s;

    s.readPersonal();
    s.readAcademic();
    s.displayStudent();

    return 0;
}
