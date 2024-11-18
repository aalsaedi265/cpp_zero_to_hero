
#include <iostream>

//namespace group related code together bu sharing the same name different values
namespace first{
    int x = 2;
}

namespace second{
    int y = 3;
}

// typedef can be used to create new names for existing types
typedef std::string text_t;
typedef int number_t;

//same as above but with using
using text_t = std::string;
using number_t = int;
using dec = double;

int main() {
// using namespace y allows to use already established variables
    using namespace second;
    int x = 0;

    text_t name = "DIO";
     // can not make it a dec now since it set to number_t
    number_t powerLevel = 9001;
    powerLevel += 1;
    powerLevel++;

    dec powerLevel1 = 9001;
    powerLevel1 /= 5;

    // moudulo operator %


    // std::cout << x << " " << first::x << " " << y << '\n';

    // std::cout << name << " " << powerLevel << " " << powerLevel1 << '\n';


    // implicit (automatic double d) conversion 
    double d = (int) 3.14; // explicit conversion

    // accept user input
    // cout << insertion operator
    // cin >> extraction operator

    std::string Thename;
    std::string favoriteMove;

    // std::cout << "Enter your full name: ";
    // //std::cin >> Thename; wont work if name got space
    // std::getline(std::cin >> std::ws, Thename);//ws removes white space before user inpute

    // std::cout << "Enter your favorite move: ";
    // std::getline(std::cin, favoriteMove);


    // std::cout << "Hello " << Thename << '\n';
    // std::cout << "my favorite move is " << favoriteMove << '\n';

    // MATH pow(), sqrt(), abs(), ceil(), floor(), round(), trunc(), std::max(), std::min()

    return 0;
}