#include <iostream>
#include <string>
using namespace std;

class BankAccount {
public:
    string accountNumber;
    string accountHolder;
    double balance;

    // Constructor
    BankAccount(string accNo, string holder, double bal) {
        accountNumber = accNo;
        accountHolder = holder;
        balance = bal;
    }

    // Display account details
    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
    }

    // Deposit money
    void deposit(double amount) {
        balance = balance + amount;
    }

    // Withdraw money
    void withdraw(double amount) {
        if (amount <= balance) {
            balance = balance - amount;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }
};

int main() {
    BankAccount b1("123456", "JIYA", 5000);

    b1.display();

    cout << "After Deposit:" << endl;
    b1.deposit(2000);
    b1.display();

    cout << "After Withdrawal:" << endl;
    b1.withdraw(1500);
    b1.display();

    return 0;
}
