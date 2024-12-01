
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

### dynamic memory allocation
// Allocate single variable
int* ptr = new int;       // Allocate memory
*ptr = 5;                 // Use memory
delete ptr;               // Free memory

// Allocate array
int* arr = new int[5];    // Allocate array
arr[0] = 1;               // Use array
delete[] arr;             // Free array

// Allocate objects
class MyClass {...};
MyClass* obj = new MyClass(); // Create object
delete obj;                   // Destroy object

### Function Template
    template <typename T, typename U> // to be what ever type I want

    // at front auto (compiler automatically figures it out) can sub for T
    T max(T x, U y){
        return (x > y) ? x : y;
    }
   
### Structs
// Structs are user defined data types used as function parameter & thing to define a variable

    struct student{
        std::string name;
        double gpa;
        bool enrolled = true;
    };

    student student1 = {"DIO", 4.0, true};

    student student2;
    student2.name = "Patrick";
    student2.gpa = 2.1;

// Pass by value
void printStudent(Student s) {
   std::cout << s.name << ", " << s.age << ", " << s.gpa << std::endl;
}

// Pass by reference 
void updateGPA(Student& s, double newGPA) {
   s.gpa = newGPA;
}

// Pass by pointer
void updateAge(Student* s, int newAge) {
   s->age = newAge;
}

### Enumerators aka Enums
// prevents using wrong value
// each value has a name consists of an integer

// Basic enum
enum Color {
    RED,    // 0 by default
    GREEN,  // 1
    BLUE    // 2
}
// Enum with custom values
enum Status {
    ERROR = -1,
    PENDING = 0,
    SUCCESS = 1
};
// Enum class (type-safe, scoped)
enum class Direction {
    NORTH,
    SOUTH,
    EAST,
    WEST
};

## Library installation
open MSYS2 terminal
    pacman -Syu
                               library name is sfml
    pacman -S mingw-w64-x86_64-gcc-sfml
    or for me
    pacman -S mingw-w64-ucrt-x86_64-sfml
then update tasks.json by adding to args
    "-lsfml-graphics",
    "-lsfml-window",
    "-lsfml-system"
this should be in the sfml documentaition

### constructor
class Car{
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;
// constructor
    Car(std::string make, std::string model, int year, std::string color){
        // "this->" optional
        this->make = make;
        this->model = model;
        this->year = year;
        this->color = color;
    }
};

// overload constructor
use the same constructor name
but use different number of parameters/arguments/atributes

### Getter & Setter
class Stove{
    private:
        int temperature = 0;
    
    public:

    int getTemperature(){
        return temperature;
    }

    void setTemperature(int temperature){
        if(temperature < 0){
            this->temperature = 0;
        }
        else if(temperature >= 10){
            this->temperature = 10;
        }
        else{
            this->temperature = temperature;
        }
    }
};

int main() {

    Stove stove;

    stove.setTemperature(5);

    std::cout << "The temperature setting is: " << stove.getTemperature();

    return 0;
}

### Inheritance
// Base class
class Vehicle {
public:
   std::string brand;
   void start() {
       std::cout << "Vehicle started" << std::endl;
   }
};

// Derived class
class Car : public Vehicle {
public:
   std::string model;
   void honk() {
       std::cout << "Beep!" << std::endl;
   }
};

int main() {
   Car myCar;
   myCar.brand = "Toyota";  // Inherited from Vehicle
   myCar.model = "Corolla"; // From Car class
   myCar.start();          // Inherited method
   myCar.honk();           // Car's method
}