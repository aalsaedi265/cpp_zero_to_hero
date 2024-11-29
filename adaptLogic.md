
### mulite demensional arrays
    int arr[2][3] = {{1,2,3},{4,5,6}};  
    // iterate over 2d array
    for (int i = 0; i < 2; i++) {
        // arr[i] will give memeroy address of arrays
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << "\n"; // will get the values
        }
    }

### Memory address and pointer operator
    & - memory address - address of operator
    * - deference/pointer operator - gets the value at that memory address

    int x = 5;
    int* ptr = &x;    // & gets the address of x
    *ptr = 10;        // * accesses the value at that address, setting it to 10


### pass by reference & pass by value
value

void modifyNumber(int num) {  // num is a copy
    num = 100;  // only modifies the local copy
}

int main() {
    int x = 5;
    modifyNumber(x);  // x remains 5 after the function call
    return 0;
}

reference
// were using &
void modifyNumber(int& num) {  // num is a reference
    num = 100;  // modifies the original variable
}

int main() {
    int x = 5;
    modifyNumber(x);  // x becomes 100 after the function call
    return 0;
}

### null pointer
    int* ptr = nullptr;
    if (ptr != nullptr) {  // safety check
    *ptr = 5;  // only executes if ptr is valid
}


