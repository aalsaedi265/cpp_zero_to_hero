
#include <iostream>

int main() {

    double temp;
    char unit;

    std::cout <<"F = Fahrenheit, C = Celcius: " << '\n';
    std::cout <<"chose unit to convert to: " << '\n';
    std::cin >> unit;

    if (unit == 'F' || unit == 'f') {
        std::cout << "Enter temp in celcius: " << '\n';
        std::cin >> temp;
        temp = (temp * 9/5) + 32;
        std::cout << temp << " F" << '\n';
    } else if (unit == 'C' || unit == 'c') {
        std::cout << "Enter temp in fahrenheit: " << '\n';
        std::cin >> temp;
        temp = (temp - 32) * 5/9;
        std::cout << temp << " C" << '\n';
    }else{
        std::cout << "CRRUUUCIOOOOOOO, mistakes hurt" << '\n';
    }

    return 0;
}