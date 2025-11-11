#include<iostream>
using namespace std;
class Reva {
public:
    Reva(){
        cout << "Constructor Called!!" << endl;
        cout << "Object Created!!" << endl; 
    }
    ~Reva(){
        cout << "Object Destroyed!!!" << endl;
    }
};
int main(){
    Reva r1;
    Reva r2; 
}
