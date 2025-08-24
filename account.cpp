#include <iostream>
using namespace std;

class Account {
public:
    string accountNumber;
    double balance;
    string ownerName;

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrew: " << amount << endl;
        }
    }
    void checkminbalance(double amount) {
        double minBalance = 100000;
        if ((balance - amount) < minBalance) {
            cout << "Cannot withdraw! Account must maintain at least 100.000 VND." << endl;
        }
    }
    void displayBalance() {
        cout << "Owner: " << ownerName << endl;
        cout << "Current balance: " << balance << endl;
    }
};

int main() {
    Account acc1;
    acc1.accountNumber = "123456789";
    acc1.balance = 1000.0;

    acc1.displayBalance();
    acc1.deposit(500);
    acc1.displayBalance();
    acc1.withdraw(200);
    acc1.displayBalance();
    acc1.withdraw(1500); // Thử rút quá số dư
    acc1.displayBalance();
    acc1.checkminbalance(50000);
    return 0;
}
