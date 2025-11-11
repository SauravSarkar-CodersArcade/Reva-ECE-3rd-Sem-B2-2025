#include<iostream>
using namespace std;
class Overloading {
public:
    static void add(int a, int b){
        cout << a + b << endl;
    }
    static void add(int a, int b, int c){
        cout << a + b << endl;
    }
    static void add(float a, float b){
        cout << "Float is called" << endl;
        cout << a + b << endl;
    }
    static void add(double a, double b){
        cout << "Double is called" << endl;
        cout << a + b << endl;
    }
};
int main(){
    Overloading::add(1,2);
    Overloading::add(1,2,3);
    Overloading::add(1.23, 2.45);
    Overloading::add(233.4456f, 123.7856F);
    return 0;
}