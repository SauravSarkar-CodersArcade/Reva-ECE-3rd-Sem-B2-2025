#include<iostream>
using namespace std;
class Father {
public:
    virtual void building(){
        cout << "This building is a Restaurant, made by Father." << endl;
    }
};
class Son : public Father {
public:
    void building() override {
        cout << "This building is a Gym, made by Son." << endl;
    } 
};
class Daughter : public Father {
public:
    void building() override {
        cout << "This building is a Boutique, made by Daughter." << endl;
    } 
};
int main(){
    Father f;
    Daughter d;
    Son s;
    f.building();
    d.building();
    s.building();
}