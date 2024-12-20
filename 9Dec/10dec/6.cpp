#include <iostream>
#include <string>
class BankAccount {
private:
    std::string accountHolder; 
    double balance;            

public:
    // Constructor to initialize account holder and balance
    BankAccount(std::string holder, double initialBalance) {
        accountHolder = holder;
        balance = initialBalance;
    }

    // Function to add money to the account
    void credit(double amount) {
        if (amount > 0) {
            balance += amount; // Add to the balance
            std::cout << "Credited: $" << amount << std::endl;
        } else {
            std::cout << "Invalid credit amount!" << std::endl;
        }
    }

    // Function to withdraw money from the account
    void debit(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount; // Subtract from the balance
            std::cout << "Debited: $" << amount << std::endl;
        } else {
            std::cout << "Invalid debit amount or insufficient funds!" << std::endl;
        }
    }

    // Function to display account details
    void display() const {
        std::cout << "Account Holder: " << accountHolder 
                  << ", Balance: $" << balance << std::endl;
    }
};

int main() {
   
    BankAccount account("Elon", 1000.0);

   
    account.display();

  
    account.credit(500.0);
    account.display();

  
    account.debit(200.0);
    account.display();

   
    account.debit(1500.0);
    account.display();

    return 0;
}
