#include <iostream>
#include <string>

int main() {
    std::string sign;
    bool interest;

    std::cout << "Are you interested in astrology and in getting your horoscope? (1 = yes; 0 = no)" << std::endl;
    std::cin >> interest;

    if (interest == 1) {
        std::cout << "Please enter your astrological sign:" << std::endl;
        std::cin >> sign;

        // Check the astrological sign using if-else if
        if (sign == "Aries" || sign == "aries") {
            std::cout << "You will be a millionaire" << std::endl;
        } else if (sign == "Cancer" || sign == "cancer") {
            std::cout << "You will find your true love this week" << std::endl;
        } else if (sign == "Libra" || sign == "libra") {
            std::cout << "You will find your true love this week" << std::endl;
        } else if (sign == "Taurus" || sign == "taurus") {
            std::cout << "You will find your true love this week" << std::endl;
        } else if (sign == "Leo" || sign == "leo") {
            std::cout << "You will find your true love this week" << std::endl;
        } else if (sign == "Scorpio" || sign == "scorpio") {
            std::cout << "You will find your true love this week" << std::endl;
        } else if (sign == "Gemini" || sign == "gemini") {
            std::cout << "You will find your true love this week" << std::endl;
        } else if (sign == "Capricorn" || sign == "capricorn") {
            std::cout << "You will find your true love this week" << std::endl;
        } else if (sign == "Aquarius" || sign == "aquarius") {
            std::cout << "You will find your true love this week" << std::endl;
        } else if (sign == "Virgo" || sign == "virgo") {
            std::cout << "You will find your true love this week" << std::endl;
        } else if (sign == "Pisces" || sign == "pisces") {
            std::cout << "You will find your true love this week" << std::endl;
        } else if (sign == "Sagittarius" || sign == "sagittarius") {
            std::cout << "You will find your true love this week" << std::endl;
        } else {
            std::cout << "Invalid sign entered." << std::endl;
        }
    } else {
        std::cout << "Thank you for your answer, bye!" << std::endl;
    }

    return 0;
}
