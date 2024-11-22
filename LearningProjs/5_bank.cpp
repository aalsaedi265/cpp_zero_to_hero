
#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit(), withdraw(double balance), balance;

int main() {

    balance = 9000.01;
    int choice = 0;
    do{
        std::cout << "Welcome to the Bank" << '\n';
        std::cout << "Enter 1 to deposit" << '\n';
        std::cout << "Enter 2 to withdraw" << '\n';
        std::cout << "Enter 3 to show balance" << '\n';
        std::cout << "Enter 4 to quit" << '\n';
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            balance += deposit();
            showBalance(balance);
            break;
        case 2:
            balance -= withdraw(balance);
            showBalance(balance);
            break;
        case 3:
            showBalance(balance);
            break;
        case 4:
            std::cout << "Thanks for using the bank" << '\n';
            break;
        default:
            std::cout << "Invalid choice" << '\n';
            break;
        }
    } while (choice != 4);   
    return 0;
}

void showBalance(double balance){
    std::cout << "Your balance is $" << std::fixed << std::setprecision(2) << balance << '\n';
}

double deposit(){
    double amount = 0.0;
    std::cout << "Enter amount to deposit: " << '\n';
    std::cin >> amount;
    if(amount > 0){
        return amount;
    }else{
        std::cout << "Invalid amount" << '\n';
        return 0.0;
    }
}

double withdraw(double balance){
    double amount = 0.0;
    std::cout << "Enter amount to withdraw: " << '\n';
    std::cin >> amount;
    if (amount > balance){
        std::cout << "Insufficient funds" << '\n';
        return 0.0;
    }else if (amount < 0){
        std::cout << "Invalid amount" << '\n';
        return 0.0;
    }else{
        return amount;
    }
}