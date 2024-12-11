#include <iostream>

int main() {
    int a = 0, b = 0;
    int year;
    int age;

    std::cout << "Hi! Enter your current age :"<< std::endl;
    std::cin >> age;

    std::cout << "What year where you born ? "<< std::endl;
    std::cin >> year;

    
    std::cout << "" << std::endl;
    std::cout << "Addition : " << std::endl;
    std::cout << "Current year (age + year of birth): " << (age + year) << std::endl;

    std::cout << "" << std::endl;
    std::cout << "Substraction : " << std::endl;
    std::cout << "What would be your age if you were born 3 years later ? " << (age - 3) << std::endl;

    std::cout << "" << std::endl;
    std::cout << "Multiplication : " << std::endl;
    std::cout << "What would be your age if you where twice as old ? " << (2 * age) << std::endl;

    std::cout << "" << std::endl;
    std::cout << "Division : " << std::endl;
    std::cout << "What would be your age if you where half your current age ?: " << (age / 2) << std::endl;

    std::cout << "" << std::endl;
    std::cout << "Modulus : " << std::endl;
    std::cout << "What is the remaning if we divide you age of birth by 3 ? " << (age % 3) << std::endl;

    return 0;
}
