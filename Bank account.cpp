#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountNumber;
    std::string accountHolderName;
    double accountBalance;

public:
    BankAccount(const std::string& number, const std::string& holderName, double balance) {
        accountNumber = number;
        accountHolderName = holderName;
        accountBalance = balance;
    }

    void deposit(double amount) {
        accountBalance += amount;
        std::cout << "Deposited: $" << amount << std::endl;
    }

    void withdraw(double amount) {
        if (accountBalance >= amount) {
            accountBalance -= amount;
            std::cout << "Withdrawn: $" << amount << std::endl;
        } else {
            std::cout << "Insufficient balance. Unable to withdraw $" << amount << std::endl;
        }
    }

    void displayAccountInfo() {
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Account Holder: " << accountHolderName << std::endl;
        std::cout << "Account Balance:" << accountBalance << std::endl;
    }
};

int main() {
    // Create a BankAccount object
    BankAccount myAccount("123456789", "Kaleb Tasew", 1000.0)
    // Deposit money into the account
    myAccount.deposit(500.0);

    // Withdraw money from the account
    myAccount.withdraw(200.0);

    // Display the account information
    myAccount.displayAccountInfo();

    return 0;
