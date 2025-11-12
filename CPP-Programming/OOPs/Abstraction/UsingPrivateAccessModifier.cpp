#include<iostream>
using namespace std;
class BankAccount{
private:
    double balance;
public:
    BankAccount(double initialAmount){
        balance = initialAmount;
    }
    void deposit(double amount){
        balance += amount;
        cout << "Deposited: ₹" << amount << endl;
    }
    void withdraw(double amount){
        if(amount <= balance){
            balance -= amount;
            cout << "Withdrawn: ₹" << amount << endl;
        }else{
            cout << "Insufficient Funds...!" << endl; 
        }
    }
    void showBalance(){
        cout << "Current Balance: ₹" << balance << endl;
    }
};
int main(){
    BankAccount acc(1000);
    acc.deposit(500);
    acc.withdraw(300);
    acc.showBalance();
    acc.withdraw(2000);
    // acc.balance; // Not accessible - private
    return 0;
}