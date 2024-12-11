#include <iostream>
#include <string> // Required for string

int main() {
    // Declare variables
    int age = 25;       // Integer
    float pi = 3.14;    // Floating-point
    double g = 9.81;    // Double precision
    char grade = 'A';   // Character
    bool passed = true; // Boolean
    std::string name = "David"; // String (needs <string>)

    // Output variables
    std::cout << "Age: " << age << std::endl;
    std::cout << "Pi: " << pi << std::endl;
    std::cout << "Gravity: " << g << std::endl;
    std::cout << "Grade: " << grade << std::endl;
    std::cout << "Passed: " << passed << std::endl;
    std::cout << "Name: " << name << std::endl;

    return 0;
}
