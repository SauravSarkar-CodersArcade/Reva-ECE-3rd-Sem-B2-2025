#include<iostream>
#include<cmath>
using namespace std;
class Calculator {
public:
    // This class has both normal method as well as a pure virtual function
    // So, this is not a 100% abstract class
    // Normal method is also known as concrete method 
    void showIntro(){
        cout << "=== Coders Arcade Calculator ===" << endl;
    }
    void separator(){
        cout << "=================== Separator ===================" << endl;
    }
    // Pure Virtual Function - Similar to Interface in Java
    // This function is defined in the child classes
    virtual void calculate () = 0;  
};
class SimpleCalculator : public Calculator {
public:
    void calculate () override {
        cout << "Addition: " << 10 + 5 << endl;
        cout << "Subtraction: " << 10 - 5 << endl;
    }    
};
class ScientificCalculator : public Calculator {
public:
    void calculate () override {
        cout << "Square Root: " << sqrt(25) << endl;
        cout << "Power: " << pow(2,3) << endl;
    }
};
int main(){
    // What is the most imprtant use of Polymorphism ?
    // We can use a parent class pointer to refer to a child class object.
    Calculator* calc;
    SimpleCalculator simple;
    ScientificCalculator sci;
    calc->separator();
    calc = &simple;
    calc->showIntro();
    calc->calculate();
    calc->separator();
    calc = &sci;
    calc->showIntro();
    calc->calculate();
    calc->separator();
    return 0;
}