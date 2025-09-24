### Experiment 14: Types and Modes of Inheritance

-----

### Aim

To study and implement **types** and **modes of inheritance** in C++ with suitable examples and flowcharts.

-----

### Objectives

1.  To understand the concept of **inheritance** in Object-Oriented Programming (OOP).
2.  To differentiate between **modes of inheritance** – public, private, and protected.
3.  To implement various **types of inheritance** – single, multiple, multilevel, and hierarchical.
4.  To explore **real-life applications** of inheritance in software and system design.
5.  To learn how base class members are inherited under different modes.

-----

### Algorithm

The algorithm for this experiment involves a series of steps to design and implement a program demonstrating various inheritance concepts in C++.

1.  **Start:** Begin the program execution.
2.  **Define Classes:**
      * Create a base class (e.g., `Vehicle`) with public and protected members (data and methods).
      * Create a derived class (e.g., `Car`) that inherits from the base class.
3.  **Implement Inheritance Modes:**
      * **Public Inheritance:** Declare the derived class using `public` inheritance and demonstrate how public and protected members of the base class are accessed.
      * **Protected Inheritance:** Create a new derived class using `protected` inheritance and show that base class members are accessible within this derived class but not in `main()`.
      * **Private Inheritance:** Create another derived class using `private` inheritance and verify that base class members are only accessible within the derived class.
4.  **Implement Inheritance Types:**
      * **Single Inheritance:** Use a single base class and a single derived class (e.g., `Rectangle` to `RectangleArea`).
      * **Multiple Inheritance:** Design two base classes (e.g., `PersonalInfo` and `AcademicInfo`) and a single derived class (`Student`) that inherits from both.
      * **Multilevel Inheritance:** Create a chain of inheritance with a base class and two levels of derived classes (e.g., `Vehicle` to `Car` to `ElectricCar`).
      * **Hierarchical Inheritance:** Use one base class (`Vehicle`) and multiple derived classes (`Car`, `Bike`, `Bus`) that inherit from it.
5.  **Create Objects and Demonstrate Functionality:**
      * In the `main()` function, create objects of the derived classes.
      * Call the appropriate member functions to demonstrate how inherited members are accessed and used.
      * Include comments to explain which members are inherited and which are not based on the mode and type of inheritance.
6.  **End:** Terminate the program.

-----

### Tools Used

  - **Language**: C++
  - **Compiler**: g++ / any C++ compiler
  - **Platform**: Code::Blocks / Visual Studio Code / Turbo C++ / OnlineGDB

-----

### Theory

#### What is Inheritance?

Inheritance is one of the fundamental concepts of **Object-Oriented Programming (OOP)**. It allows a **class (derived class)** to **reuse properties and behaviors (data and functions)** of another class (base class).

  - Promotes **code reusability**.
  - Supports **extensibility** (adding new features without modifying existing code).
  - Represents **real-world relationships** (IS-A relationship).

**Example:**

  * A **Car** is a type of **Vehicle** → Car inherits Vehicle’s properties.
  * A **Student** is a type of **Person** → Student inherits Person’s attributes.

-----

#### Modes of Inheritance

Inheritance in C++ allows a class (derived class) to acquire properties and behaviors of another class (base class). There are three main modes of inheritance, which determine how base class members are accessible in the derived class and outside it:

1.  **Public Inheritance**

      * Public members of the base class become **public** in the derived class.
      * Protected members remain **protected**.
      * Private members are **not inherited**.
      * **Use:** Most common; preserves the interface of the base class.

2.  **Protected Inheritance**

      * Public and protected members of the base class become **protected** in the derived class.
      * Private members are **not inherited**.
      * **Use:** When you want to hide the base class interface from outside but allow derived classes to access it.

3.  **Private Inheritance**

      * Public and protected members of the base class become **private** in the derived class.
      * Private members are **not inherited**.
      * **Use:** When you want to implement functionality using the base class without exposing its interface externally.

-----

#### Difference between Modes of Inheritance

| Mode | Effect on Base Class Members in Derived Class | Visibility Outside Class | Key Points |
| :--- | :--- | :--- | :--- |
| Public | Public → Public, Protected → Protected | Private members not inherited | Preserves base class interface; most common |
| Protected | Public → Protected, Protected → Protected | Private members not inherited | Base class interface becomes protected |
| Private | Public → Private, Protected → Private | Private members not inherited | Hides base class interface; ensures encapsulation |

-----

#### Types of Inheritance

1.  **Single Inheritance**

      * One base class → One derived class.
      * **Example:** Vehicle → Car.

2.  **Multiple Inheritance**

      * One class inherits from more than one base class.
      * **Example:** Student inherits from **PersonalInfo** and **AcademicInfo**.

3.  **Multilevel Inheritance**

      * A chain of inheritance.
      * **Example:** Vehicle → Car → ElectricCar.

4.  **Hierarchical Inheritance**

      * Multiple derived classes inherit from a single base class.
      * **Example:** Grandfather → Father → Child.

#### Difference between Types of Inheritance

| **Aspect** | **Single** | **Multiple** | **Multilevel** | **Hierarchical** |
| :--- | :--- | :--- | :--- | :--- |
| **Relation** | One base → One derived | Many bases → One derived | Base → Derived → Derived chain | One base → Many derived |
| **Complexity** | Very simple | High (ambiguity possible) | Moderate | Moderate |
| **Reusability** | Limited | High (merge features) | Stepwise reuse | Broad reuse |
| **Ambiguity** | None | Diamond problem may occur | Rare (linear chain) | None |
| **Use Case** | Basic extension | Combining diverse features | Passing features across levels | Common base with variations |

-----

#### Flowcharts

#### Modes of Inheritance

##### Public Mode

```
+----------------+
|   Base Class   |
|  (public,pro.) |
+----------------+
        |
        v  (public inheritance)
+----------------+
| Derived Class  |
| public→public  |
| protected→prot.|
+----------------+
        |
        v
+----------------+
|      Main      |
| Public access  |
+----------------+
```

-----

##### Private Mode

```
+----------------+
|   Base Class   |
|  (public,pro.) |
+----------------+
        |
        v  (private inheritance)
+----------------+
| Derived Class  |
| public→private |
| protected→priv.|
+----------------+
        |
        v
+----------------+
|      Main      |
| Not Accessible |
+----------------+
```

-----

##### Protected Mode

```
+----------------+
|   Base Class   |
|  (public,pro.) |
+----------------+
        |
        v  (protected inheritance)
+----------------+
| Derived Class  |
| public→prot.   |
| protected→prot.|
+----------------+
        |
        v
+----------------+
|      Main      |
| Not Accessible |
+----------------+
```

-----

#### Types of Inheritance

##### Single Inheritance

```
+----------------+
|   Rectangle    |
|  (Base Class)  |
+----------------+
        |
        v
+----------------+
| RectangleArea  |
| (Derived Class)|
+----------------+
        |
        v
+----------------+
|      Main      |
| read_input()   |
| display()      |
+----------------+
```

-----

##### Multiple Inheritance

```
+----------------+       +----------------+
|  PersonalInfo  |       | AcademicInfo   |
+----------------+       +----------------+
          \               /
           \             /
            v           v
           +----------------+
           |    Student     |
           | (Derived Class)|
           +----------------+
                   |
                   v
             +-------------+
             |    Main     |
             | read+show   |
             +-------------+
```

-----

##### Multilevel Inheritance

```
+----------------+
|   Vehicle      |
+----------------+
        |
        v
+----------------+
|     Car        |
+----------------+
        |
        v
+----------------+
|  ElectricCar   |
+----------------+
        |
        v
+----------------+
|      Main      |
| show() chain   |
+----------------+
```

-----

##### Hierarchical Inheritance

```
                  ┌────────────────────────┐
                  │        main()          │
                  └───────────┬────────────┘
                              │
          ┌───────────────────┴───────────────────┐
          │                                       │
 ┌────────▼─────────┐                     ┌────────▼─────────┐
 │ Create object w  │                     │ Create object m  │
 │ (WashingMachine) │                     │ (Microwave)      │
 └────────┬─────────┘                     └────────┬─────────┘
          │                                       │
 ┌────────▼─────────┐                     ┌────────▼─────────┐
 │ Call setPrice()  │                     │ Call setPrice()  │
 │ (from Appliance) │                     │ (from Appliance) │
 └────────┬─────────┘                     └────────┬─────────┘
          │                                       │
 ┌────────▼─────────┐                     ┌────────▼─────────┐
 │ Call Purpose()   │                     │ Call Purpose()   │
 │ (WashingMachine) │                     │ (Microwave)      │
 └────────┬─────────┘                     └────────┬─────────┘
          │                                       │
 ┌────────▼─────────┐                     ┌────────▼─────────┐
 │ Call Purpose()   │                     │ Call Purpose()   │
 │ (Appliance)      │                     │ (Appliance)      │
 └──────────────────┘                     └──────────────────┘
```

-----

#### Real-Life Applications of Inheritance

  - **Vehicle Management System:** Base class `Vehicle`; derived classes: `Car`, `Bike`, `Bus`.
  - **Employee Management System:** Base class `Employee`; derived classes: `Manager`, `Developer`, `Tester`.
  - **Banking System:** Base class `Account`; derived classes: `SavingsAccount`, `CurrentAccount`.
  - **Education System:** Base class `Person`; derived classes: `Student`, `Teacher`.

-----

#### Real-Life Applications of Modes of Inheritance

  - **Public Inheritance:** `Car` inherits `Vehicle` publicly to access properties like speed, fuel, and color externally.
  - **Protected Inheritance:** `TeacherAssistant` inherits `Teacher` with protected access, so derived classes can use base methods internally but not outside.
  - **Private Inheritance:** `LibraryDatabase` inherits `Database` privately to reuse internal methods without exposing them externally.

-----

#### Real-Life Applications of Types of Inheritance

  - **Single Inheritance:** `Car` inherits `Vehicle` (one-to-one relationship).
  - **Multiple Inheritance:** `Smartphone` inherits `Camera` and `Phone` (combining multiple features).
  - **Multilevel Inheritance:** `SportsCar` inherits `Car`, which inherits `Vehicle` (chained hierarchy).
  - **Hierarchical Inheritance:** `Car`, `Bike`, `Bus` inherit `Vehicle` (one-to-many relationship).
  - **Hybrid (Virtual) Inheritance:** `FlyingCar` inherits `Car` and `Airplane`, combining features while avoiding duplication from `Vehicle`.
