// Encapsulation // pillar of oop
// Everthing (every method) in one class

#include <iostream>

using namespace std;

class BankAccount {
    private:
        string accountNumber;
        double balance;

    public:
        BankAccount(string accNum, double initialBalance){
            accountNumber = accNum;
            balance = initialBalance;
        }

        // getter
        double getBalance() const {
            return balance;
        }

        //Method to deposit money
        void deposit(double amount){
            if (amount > 0){
                balance += amount;
                cout << "Deposited: " << amount << endl;
            }else{
                cout << "Invalid Deposit Amount";
            } 
        }

         //Method to withdraw money
        void withdraw(double amount){
            if (amount > 0 && amount <= balance){
                balance -= amount;
                cout << "Withdraw: " << amount << endl;
            }else{
                cout << "Invalid Withdraw Amount";
            } 
        }
};

int main(){

    BankAccount bankRamesh("12299325", 500);
    cout << bankRamesh.getBalance() << endl;

    bankRamesh.deposit(100);
    cout << bankRamesh.getBalance() << endl;

    bankRamesh.withdraw(20);
    cout << bankRamesh.getBalance() << endl;



    return 0;
}
