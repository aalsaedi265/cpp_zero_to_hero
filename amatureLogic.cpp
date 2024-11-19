
#include <iostream>

int main() {
    // if used same as in js & c#

    // switched is same as in js & c#
    /*
    
    swtich (expression) {
        case value1:
            // code block
            break;
        case value2:
            // code block
            break;
        default:
            // code block
    }
    
    */

    // TERNARY OPERATOR
    //  condition ? true : false;
    bool hungry = true;
   // hungry ? std::cout << "hungry" : std::cout << "not hungry";
    std::cout << (hungry ? "hungry" : "not hungry");

    
    return 0;
};