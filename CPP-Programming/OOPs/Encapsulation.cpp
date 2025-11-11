#include<iostream>
using namespace std;
class Employee {
private:
    string Name;
    int Age;
    string Company;
public:
    // Setters - Used to set/assign the attributes
    void setName(string name){
        Name = name;
    }
    void setAge(int age){
        Age = age;
    }
    void setCompany(string company){
        Company = company;
    }
    // Getters - Used to retrieve/get the attributes
    string getName(){
        return Name;
    }
    int getAge(){
        return Age;
    }
    string getCompany(){
        return Company;
    }
};
int main(){
    Employee e1;
    e1.setName("Ashank");
    e1.setAge(29);
    e1.setCompany("Coders Arcade");
    cout << e1.getName() << " " << e1.getAge() << " " << e1.getCompany() << "\n";
    return 0;
}