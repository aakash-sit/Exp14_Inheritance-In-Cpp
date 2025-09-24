// Aakash Choudhari
// 24070123031
// E&TC-A2


#include <iostream>
#include <string>

// Base class
class Person {
protected:
    std::string name;
    int age;

public:
    void setPerson(std::string n, int a) {
        name = n;
        age = a;
    }
    void showPerson() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

// Derived class
class Student : private Person {
    int rollNo;
public:
    void setStudent(std::string n, int a, int r) {
        setPerson(n, a);
        rollNo = r;
    }
    void showStudent() const {
        showPerson();
        std::cout << "Roll No: " << rollNo << std::endl;
    }
};

int main() {
    Student s;
    s.setStudent("Ankit", 20, 101);
    s.showStudent();

    // The following lines are commented out because of private inheritance
    // s.setPerson("Ravi", 25);
    // s.showPerson();

    return 0;
}
