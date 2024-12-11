#include <iostream>
#include <string>

int main() {
    int age;
    std::string name;

    // Input age
    std::cout << "Enter your age: ";
    std::cin >> age;

    // Input name
    std::cout << "Enter your name: ";
    std::cin.ignore(); // Ignore leftover newline from previous input
    std::getline(std::cin, name);

    // Output user input
    std::cout << "Hello World ! My name is "<< name << " !" << std::endl;
    std::cout << "I am "<< age << " years old !" << std::endl;

    return 0;
}
