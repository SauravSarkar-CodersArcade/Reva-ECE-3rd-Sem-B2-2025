#include<iostream>
using namespace std;
class Student {
public:
    // Instance Variables -> Belong to class & all the objects
    string Name;
    int SRN;
    string Email;
    Student(string Name, int SRN, string Email){
        // The this pointer is used to refer / point to the instance variables
        this->Name = Name;
        this->SRN = SRN;
        this->Email = Email;
    }
    void displayStudentData(){
        cout << "Name: " << Name << endl;
        cout << "SRN: " << SRN << endl;
        cout << "Email: " << Email << endl;
    }
};
int main(){
    Student s1("Raghavan", 121, "raghavan@gmail.com");
    s1.displayStudentData(); 
    return 0;
}