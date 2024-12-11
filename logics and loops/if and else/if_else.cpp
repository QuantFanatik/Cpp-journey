#include <iostream>

int main() {
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age < 18) {
        std::cout << "You are a minor. Enjoy your youth !! " << std::endl;
    } else if (age >= 18 && age < 60) {
        std::cout << "You are an adult. You should get that driving license ! " << std::endl;
    } else {
        std::cout << "You are a senior citizen. Is your back hurting ?" << std::endl;
    }

    return 0;
}
