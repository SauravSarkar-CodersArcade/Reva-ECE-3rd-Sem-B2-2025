#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of rows of the 2D Matrix:" << endl;
    cin >> n;
    int ** squareMatrix = new int * [n]; // This creates the box
    // Now we need to initialize the rows separately
    cout << "Enter the elements of the 2D Matrix:" << endl;
    for(int i=0; i<n; i++){
        // Here we assign memory for each row
        squareMatrix[i] = new int[n]; // Each row of size n 
        for(int j=0; j<n; j++){
            cin >> squareMatrix[i][j];
        }
    }
    cout << "The 2D Matrix Elements are:" << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << squareMatrix[i][j] << " ";
        }cout << endl;
    }
    delete [] squareMatrix;
    return 0;
}