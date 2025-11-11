#include<iostream>
using namespace std;
class Employee {
public:
    string Name;
    int Age;
    string Company;
    Employee(string name, int age, string company){
        Name = name;
        Age = age;
        Company = company;
    }
    void employeeDetails(){
        cout << "Name:" << Name << endl;
        cout << "Age: " << Age << endl;
        cout << "Company: " << Company << endl;
    }
};
class SoftwareDeveloper : public Employee {
public:
    string FavProLang;
    SoftwareDeveloper(string name, int age, string company, string fPl)
    : Employee(name, age, company){
        FavProLang = fPl;
    } 
    void create_apps(){
        cout << Name << " creates apps using " << FavProLang << endl;
    }   
};
class Lecturer : public Employee {
public:
    string FavSub;
    Lecturer(string name, int age, string company, string favSub)
    : Employee(name, age, company){
        FavSub = favSub;
    } 
    void teach(){
        cout << Name << " teaches " << FavSub << endl;
    }
};
int main(){
    SoftwareDeveloper s1("Rahul", 26, "TCS", "Python");
    s1.employeeDetails();
    s1.create_apps();
    Lecturer l1("Aditya", 39, "Reva", "DSP");
    l1.employeeDetails();
    l1.teach();
}
