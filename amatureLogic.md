

### switched & IF are  same as in js & c#
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

### TERNARY OPERATOR
    condition ? true : false;
    bool hungry = true;
   hungry ? std::cout << "hungry" : std::cout << "not hungry";
    std::cout << (hungry ? "hungry" : "not hungry");

## STRING TOOLS
    // .length()
    // .find() - returns position of first occurrence
    // .replace()
    // .substr(position, length) - extracts part of string
    // .empty()
    // .at(index) - gets character at position
    // .front() front and last character
    // .back()
    // .append() - adds to end of string
      // "hello".append("world"); - "helloworld"
    // .push_back() - adds to end of string

    // .erase(initial, end not included) - removes part of string
    
## WHILE & DO WHILE loop works just like in js & c#  
    do {
        // code block
    } while (condition);

### FOR loop works just like in js & c#
    //  Basic for loop (initialize; condition; increment or decrement)
    for (int i = 0; i < 5; i++) {
        cout << i << "\n";   // Prints 0,1,2,3,4
        }

    int nums[] = {1, 2, 3, 4, 5};

    for (int num : nums) {
        cout << num << "\n";   // Prints 1,2,3,4,5
    }

    // If using std::array or vector, it's simpler:

        vector<int> nums = {1, 2, 3, 4, 5};
        
        for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << "\n";
        }

## functions work same as in java & c#
    // function_declaration for string it would std::string if using instead of int
    int sum(int a, int b) {
        return a + b;
    }

    // function_call
    sum(2, 3);

    can declare a function before main & define it later
    // overload function with same name but different parameters