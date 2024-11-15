
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

int main() {
// using namespace y allows to use already established variables
    using namespace second;
    int x = 0;

    text_t name = "DIO";
    number_t powerLevel = 9001;

    // std::cout << x << " " << first::x << " " << y << '\n';


    return 0;
}