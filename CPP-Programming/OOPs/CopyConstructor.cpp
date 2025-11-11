#include<iostream>
using namespace std;
class Constructors {
private:
    int data;
public:
    Constructors(){
        cout << "Default Constructor !!!!!" << endl;
    }
    Constructors(int value) : data(value){
        cout << "Parameterized Constructor !!!!!" << endl;
    }
    Constructors(Constructors& other) : data(other.data){
        cout << "Copy Constructor !!!!!" << endl;
    }
    void display(){
        cout << "Data: " << data << endl;
    }
};
int main(){
    Constructors c1;
    Constructors c2(20);
    Constructors c3(c2);
    Constructors c4 = c3;
    c1.display();
    c2.display();
    c3.display();
    c3.display();
    return 0;
}