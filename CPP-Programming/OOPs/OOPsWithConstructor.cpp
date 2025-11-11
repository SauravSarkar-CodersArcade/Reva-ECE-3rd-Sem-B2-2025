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
    // Constructor
    Employee(string name, int age, string company){
        Name = name;
        Age = age;
        Company = company;
    }
    // Method in C++ inside a class
    void employeeDetails(){
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << endl;
        cout << "Company: " << Company << endl;
    }
};
int main(){
    Employee e1("Sahana", 29, "Bizotic");
    e1.employeeDetails();
    Employee e2 = Employee("Ramya", 32, "Bizotic");
    e2.employeeDetails();
}