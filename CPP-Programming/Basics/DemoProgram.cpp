#include<iostream>
using namespace std;
namespace jyothsna {
    int x = 200;
void add(int a, int b){
    cout << a + b << endl;
}
}
namespace vyshak{
    int x = 100;
void add(int a, int b){
    cout << a + b << endl;
}
}
int main()
{
    jyothsna::add(1,2);
    vyshak::add(10,20);
    string name;
    cout << "Enter the name:" << endl;
    getline(cin, name);
    cout << "You entered : " << name << endl;
    int a = 10;
    auto x = 2.4; // -> Iterator 
    return 0;
}