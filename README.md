
# C++ Learning Modules (00 - 04)

This repository contains a series of projects designed to introduce the fundamentals of C++ programming. Each module builds on the previous one, gradually covering more advanced concepts in C++ to give a strong foundation in Object-Oriented Programming (OOP). The C++ modules in this repository are designed to help you transition from C to C++ by focusing on the unique features and capabilities of the language.

## Module Overview

### Module 00

**Objective:** Understand the basic syntax and features of C++ in comparison to C.

- **Key Concepts:**
  - Introduction to C++ syntax.
  - Basic I/O using `iostream`.
  - Understanding `namespace` and the `std` namespace.
  - Introduction to classes and objects.
  - Simple OOP concepts: encapsulation, constructors, and destructors.

**Project Focus:**
- Implement a simple class with private attributes and public methods.
- Create multiple instances of the class and manipulate their data.

### Module 01

**Objective:** Learn about memory allocation, references, pointers to members, and the use of the `switch` statement in C++.

- **Key Concepts:**
  - Dynamic memory allocation using `new` and `delete`.
  - References vs. pointers.
  - Pointers to members and member function pointers.
  - The `switch` statement in C++.

**Project Focus:**
- Create a class with dynamic attributes managed using pointers.
- Use pointers to members and member functions.
- Implement a menu system using the `switch` statement.

### Module 02

**Objective:** Explore ad-hoc polymorphism, function overloading, and the orthodox canonical form in C++.

- **Key Concepts:**
  - Function and operator overloading.
  - Ad-hoc polymorphism using overloading.
  - The orthodox canonical form: constructors, copy constructor, assignment operator, and destructor.

**Project Focus:**
- Create a class that overloads operators like `+`, `-`, `<<`, and `>>`.
- Implement a class using the orthodox canonical form to manage resources safely.

### Module 03

**Objective:** Understand the principles of inheritance and how it applies to OOP in C++.

- **Key Concepts:**
  - Basic inheritance: base and derived classes.
  - Access specifiers: `public`, `protected`, and `private`.
  - Constructors and destructors in inheritance.
  - Function overriding and the `virtual` keyword.

**Project Focus:**
- Create a base class and derive multiple classes from it.
- Override base class methods in derived classes.
- Use polymorphism to manipulate derived class objects through base class pointers.

### Module 04

**Objective:** Delve into subtype polymorphism, abstract classes, and interfaces in C++.

- **Key Concepts:**
  - Subtype polymorphism using virtual functions and base class pointers.
  - Abstract classes and pure virtual functions.
  - Interfaces in C++ and how to implement them using abstract classes.
  - Understanding the `dynamic_cast` operator.

**Project Focus:**
- Implement a class hierarchy with at least one abstract base class and multiple derived classes.
- Use pure virtual functions to enforce a contract on derived classes.
- Demonstrate polymorphic behavior by using base class pointers to interact with derived class objects.

## How to run

1. Clone the repository:
    ```bash
    git clone https://github.com/mjorgecruz/42_cpp_00-04.git
    cd 42_cpp_00-04
    ```
2. Each module contains its own set of projects and makefiles. Navigate to the desired module directory and compile the project:

    ```bash
    cd cpp00
    cd ex00
    make
    ```
3. Run the compiled executable in the corresponding module directory:
    ```bash
    ./program_name
    ```
  
