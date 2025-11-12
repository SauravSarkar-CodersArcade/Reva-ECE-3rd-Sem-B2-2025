#include<iostream>
using namespace std;
class Payment {
public:
    void showIntro(){
        cout << "========== Reva Payment Gateway System ==========" << endl;
    }
    virtual void makePayment(double amount) = 0;
    void showSuccess(){
        cout << "Payment processed successfully..!!" << endl;
    }
};
class UPIPayment : public Payment {
public:
    void makePayment(double amount) override {
        cout << "Processing ₹" << amount << " via UPI...\n";
        cout << "Verifying UPI ID & PIN...\n";
    }
};
class CardPayment : public Payment {
public:
    void makePayment(double amount) override {
        cout << "Processing ₹" << amount << " via Card...\n";
        cout << "Authorizing through Bank Gateway...\n";
    }
};
class CashPayment : public Payment {
public:
    void makePayment(double amount) override {
        cout << "Accepting ₹" << amount << " in cash at counter...\n";
    }
};
int main(){
    Payment* pay;
    UPIPayment upi;
    CardPayment card;
    CashPayment cash;
    cout << "================================================" << endl;
    pay = &upi;
    pay->showIntro();
    pay->makePayment(20000);
    pay->showSuccess();
    cout << "================================================" << endl;
    pay = &card;
    pay->showIntro();
    pay->makePayment(10000);
    pay->showSuccess();
    cout << "================================================" << endl;
    pay = &cash;
    pay->showIntro();
    pay->makePayment(100000);
    pay->showSuccess();
    cout << "================================================" << endl;
}