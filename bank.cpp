#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Account {
private:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    Account(int accNum, string accHolderName, double initialBalance) {
        accountNumber = accNum;
        accountHolderName = accHolderName;
        balance = initialBalance;
    }
    int getAccountNumber(){
        return accountNumber;
    }
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful. New balance: $" << balance << endl;
        } else {
            cout << "Invalid amount for deposit." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && balance >= amount) {
            balance -= amount;
            cout << "Withdrawal successful. New balance: $" << balance << endl;
        } else {
            cout << "Invalid amount or insufficient balance for withdrawal." << endl;
        }
    }

    void displayBalance() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Balance: $" << balance << endl;
    }
};

class Bank {
private:
    vector<Account> accounts;
    int nextAccountNumber;

public:
    Bank() {
        nextAccountNumber = 1;
    }

    void createAccount(string accountHolderName, double initialBalance) {
        Account newAccount(nextAccountNumber, accountHolderName, initialBalance);
        accounts.push_back(newAccount);
        nextAccountNumber++;
        cout << "Account created successfully!" << endl;
    }

    Account* findAccount(int accountNumber) {
        for (size_t i = 0; i < accounts.size(); i++) {
            if (accounts[i].getAccountNumber() == accountNumber) {
                return &accounts[i];
            }
        }
        return nullptr;
    }

    void processTransaction() {
        int accountNumber;
        cout << "Enter Account Number: ";
        cin >> accountNumber;

        Account* acc = findAccount(accountNumber);

        if (acc != nullptr) {
            int choice;
            cout << "1. Deposit" << endl;
            cout << "2. Withdraw" << endl;
            cout << "3. Display Balance" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1: {
                    double amount;
                    cout << "Enter the deposit amount: $";
                    cin >> amount;
                    acc->deposit(amount);
                    break;
                }
                case 2: {
                    double amount;
                    cout << "Enter the withdrawal amount: $";
                    cin >> amount;
                    acc->withdraw(amount);
                    break;
                }
                case 3: {
                    acc->displayBalance();
                    break;
                }
                default:
                    cout << "Invalid choice." << endl;
            }
        } else {
            cout << "Account not found." << endl;
        }
    }
};

int main() {
    Bank bank;

    while (true) {
        cout << "\nBank Management System" << endl;
        cout << "1. Create Account" << endl;
        cout << "2. Process Transaction" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                string accountHolderName;
                double initialBalance;
                cout << "Enter Account Holder Name: ";
                cin.ignore();
                getline(cin, accountHolderName);
                cout << "Enter Initial Balance: $";
                cin >> initialBalance;
                bank.createAccount(accountHolderName, initialBalance);
                break;
            }
            case 2:
                bank.processTransaction();
                break;
            case 3:
                cout << "Exiting the program." << endl;
                return 0;
            default:
                cout << "Invalid choice." << endl;
        }
    }

    return 0;
}
