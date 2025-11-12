#include<iostream>
using namespace std;
class Shape {
public:
    // This class has only a pure virtual function(PVF)
    // There are no normal/concrete methods inside it
    // So, this is a completely 100% abstract class
    // This PVF will be defined in the child classes
    virtual void area() = 0;
};
class Circle : public Shape {
public:
    void area() override {
        cout << "Area of a circle is (pi * r * r) sq.units." << endl;
    }
};
class Rectangle : public Shape {
public:
    void area() override {
        cout << "Area of a rectangle is (l * b) sq.units." << endl;
    }
};
int main(){
    // Syntax 1 - to access child class object using parent pointer
    // Shape* shape;
    // Circle c;
    // Rectangle r;
    // shape = &c; 
    // Syntax 2 - to access child class object using parent pointer
    Shape* c1 = new Circle();
    Shape* r1 = new Rectangle(); 
    c1->area();
    r1->area();
    delete c1;
    delete r1;
}