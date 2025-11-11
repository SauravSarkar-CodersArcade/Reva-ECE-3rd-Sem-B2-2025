#include<iostream>
using namespace std;
// C++ -> Access Specifiers
// public, private, protected
class Employee {
public:
    // Attributes / properties / instance variables / fields
    string Name;
    int Age;
    string Company;
    // Method in C++ inside a class
    void employeeDetails(){
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << endl;
        cout << "Company: " << Company << endl;
    }
};
int main(){
    Employee e1;
    e1.Name = "Sahana";
    e1.Age = 29;
    e1.Company = "Bizotic";
    e1.employeeDetails();
    Employee e2 = Employee();
    e2.Name = "Ramya";
    e2.Age = 32;
    e2.Company = "Bizotic";
    e2.employeeDetails();
}