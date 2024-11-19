
#include <iostream>
#include <cmath>

int main() {
    double a, b, c;

    std::cout << "Enter side A then B: " << '\n';
    std::cin >> a >> b;
//pow(a, 2) + pow(b, 2)
    c = std::sqrt(a * a + b * b);

    std::cout << "Hypotanouse: " << c << '\n';

    return 0;
}