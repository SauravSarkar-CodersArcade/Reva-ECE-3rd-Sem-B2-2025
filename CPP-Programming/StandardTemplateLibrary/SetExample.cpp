#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> uniques;
    uniques.insert(100);
    uniques.insert(300);
    uniques.insert(10);
    uniques.insert(100);
    uniques.insert(200);
    uniques.insert(100);
    uniques.insert(500);
    uniques.insert(1);
    uniques.insert(500);
    for(int x : uniques){
        cout << x << " ";
    }
    return 0;
}