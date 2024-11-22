
 #include <iostream>

int main() {
// if used 0 instead of time(NULL) it will generate the same sequence
srand(time(NULL));//seed random time generating different squences each time

//get num between 1 and 100
int num = (rand() % 100) + 1;
int tries, guess;

do{
    std::cout << "guess a number between 1 and 100: " << '\n';
    std::cin >> guess;
    tries++;
    if (guess > num) {
        std::cout << "too high" << '\n';
    } else if (guess < num) {
        std::cout << "too low" << '\n';
    }else{
        std::cout << "correct, you got with only " << tries << " tries" << '\n';
    }

} while (guess != num);

std::cout <<  "Waaarriiiddaaa" << '\n';
return 0;
};