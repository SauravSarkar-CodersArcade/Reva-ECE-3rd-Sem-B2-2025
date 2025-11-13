#include<iostream>
using namespace std;
int main(){
    // Length, Breadth, Depth
    int length = 4, breadth = 5, depth = 7;
    int *** threeD = new int ** [length];
    for(int i=0; i<length; i++){
        threeD[i] = new int * [breadth];
        for(int j=0; j<breadth; j++){
            threeD[i][j] = new int [depth];
        }
    }
    delete [] threeD;
    return 0;
}