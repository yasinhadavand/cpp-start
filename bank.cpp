#include <iostream>
#include <vector>
#include <string> 

using namespace std;

class Account
{
private:
    int accountNumber;
    string accountHolderName;
    double balance;
public:
    Account(int accNam, string accHolderName, double initialBalance){
        accountNumber = accNam;
        accountHolderName = accHolderName;
        balance = initialBalance;
    };
    void deposit(double amount){
        if (amount > 0){
            balance += amount;
            cout<<"Deposit successful. New balance : $"<<balance<<endl;
        }
        else{
            cout<<"Invalid amount for deposit."<<endl;
        }
        
    }
    void withdraw(double amount){
        if (amount > 0 && balance >= amount)
        {
            balance -= amount;
            cout<<"withdrawal succcessful. New balance : $"<<balance<<endl;
        }else{
            cout<<"Invalid amount or insufficient balance for withdrawal."<<endl;
        }
        
    }
    void displayBalance(){
        cout<<"Account Number: "<<accountNumber<<endl;
        cout<<"Account Holder: "<<accountHolderName;<<endl;
        cout<<"Balance : $";
    }
};








int main (void){
    Bank bank;

    while (true)
    {
        cout<<"/nBank management System"<<endl;
        cout<<"1: Create Account "<<endl;
        cout<<"2: Process Transaction "<<endl;
        cout<<"3: Exit"<<endl;
        cout<<"Enter your choise :"<<endl;

        int choise;
        cin>>choise;

        switch (choise)
        {
        case 1:
            string accountHolderName;
            double initialBalance;

            cout<<"Enter Account Holder Name";
            cin.ignore();
            getline(cin, accountHolderName);
            cout<<"Enter Initial Balance : $ ";
            cin<<initialBalance;

            break;
        
        default:
            break;
        }
    }
    
}