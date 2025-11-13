#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vector1;
    vector<int> vector2(3,5); // 5 5 5
    for(auto x : vector2){
        cout << x << " ";
    }
    cout << endl;
    vector2.resize(10);
    for(auto x : vector2){
        cout << x << " ";
    }
    cout << endl;
    vector2.resize(15, 100);
    for(auto x : vector2){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}