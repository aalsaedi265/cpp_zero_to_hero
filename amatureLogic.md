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


## Vectors
    // Vector basics:
    vector<int> vec;  // Dynamic array that can grow/shrink

    // Adding elements
    vec.push_back(1);  // Adds to end
    vec.insert(vec.begin(), 0);  // Adds first position
    vec.insert(vec.begin() + 2, 0);  // Adds at index 3 position

    // Accessing elements
    vec[0];  // Like array
    vec.at(0);  // Safer, checks bounds

    // Size operations
    vec.size();  // Current size
    vec.empty();  // Check if empty
    vec.clear();  // Remove all elements


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

## Arrays
    can only store one type of data
    
    std::string car[] = {"Mustang", "Corvette", "Camaro"};  

    when passing into the function will need to pass a size parameter along with arr parameter


    // rest is the same as in js & c#
### sizeof() - returns size of data type
    char grades[] = {'A', 'B', 'C'};
    sizeof(grades) // 3

    //iterate over array
    for (int i = 0; i < sizeof(grades) / sizeof(grades[0]); i++) {
        cout << grades[i] << "\n";
    }

    // for each loop
    for (char grade : grades) {
        cout << grade << "\n";
    }

### find element in array
// Using array
int arr[] = {1, 2, 3, 4, 5};
for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
   if (arr[i] == 3) {
       return arr[i];  // or return i for index
   }
}

// Using find() with vector
vector<int> vec = {1, 2, 3, 4, 5};
auto it = find(vec.begin(), vec.end(), 3);
if (it != vec.end()) {
   return *it;  // Found element
}

### sort array

//  ascending
int arr[] = {3, 1, 4, 1, 5};
    
     start      length 
sort(arr, arr + sizeof(arr)/sizeof(arr[0]));

// Vector (simpler)
vector<int> vec = {3, 1, 4, 1, 5};
sort(vec.begin(), vec.end());

// Sort descending
sort(arr, arr + sizeof(arr)/sizeof(arr[0]), greater<int>());
sort(vec.begin(), vec.end(), greater<int>());

vector<int> nums = {1,5,2,4,3};

sort(nums.begin(), nums.end());  // ascending: 1,2,3,4,5
sort(nums.begin(), nums.end(), greater<int>());  // descending: 5,4,3,2,1

### reverse array
    reverse(arr, arr + sizeof(arr)/sizeof(arr[0]));
    vector<int> nums = {1,5,2,4,3};
    reverse(nums.begin(), nums.end());  // 5,4,3,2,1

### fill array
    // Basic array fill
    int arr[5];          // Create array of size 5

    // arr+5 points to position after array end
    fill(arr, arr+5, 10);  // arr is now: [10,10,10,10,10]

    // Vector fill 
    vector<int> vec(5);    // Create vector of size 5
    fill(vec.begin(), vec.end(), 20);  // vec is now: [20,20,20,20,20]

    // Partial fill
    int arr2[5] = {1,2,3,4,5};  // Start with 1,2,3,4,5

    // Like slicing: includes start, excludes end
    fill(arr2+1, arr2+3, 9);  // arr2 is now: [1,9,9,4,5]

    vector<int> vec2 = {1,2,3,4,5};
    fill(vec2.begin()+1, vec2.begin()+3, 9);  // vec2 is now: [1,9,9,4,5]
