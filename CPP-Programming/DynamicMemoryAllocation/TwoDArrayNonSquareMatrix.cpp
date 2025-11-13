#include<iostream>
using namespace std;
int main(){
    int n, m;
    cout << "Enter the number of rows & columns of the 2D Matrix:" << endl;
    cin >> n >> m;
    int ** squareMatrix = new int * [n]; // This creates the box
    // Now we need to initialize the rows separately
    cout << "Enter the elements of the 2D Matrix:" << endl;
    for(int i=0; i<n; i++){
        // Here we assign memory for each row
        squareMatrix[i] = new int[m]; // Each row of size m 
        for(int j=0; j<m; j++){
            cin >> squareMatrix[i][j];
        }
    }
    cout << "The 2D Matrix Elements are:" << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << squareMatrix[i][j] << " ";
        }cout << endl;
    }
    delete [] squareMatrix;
    return 0;
}