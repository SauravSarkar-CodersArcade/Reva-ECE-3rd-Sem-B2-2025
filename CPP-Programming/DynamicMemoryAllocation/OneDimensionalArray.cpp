#include<iostream>
using namespace std;

int main(){
    // int arr[5] = {1}; // 1,0,0,0,0 -> 4x4 = 16 bytes wasted.
    // To reduce this wastage, we use DMA
    int n;
    cout << "Enter the size of the array you need:" << endl;
    cin >> n;
    // One Dimensional Dynamic Array of Size n
    int * myArray = new int[n];
    cout << "Enter the " << n << " elements of the array:" << endl;
    for(int i=0; i<n; i++){
        cin >> myArray[i];
    }  
    cout << "The array elements are:" << endl;
    for(int i=0; i<n; i++){
        cout << myArray[i] << " ";
    }
    cout << endl;
    delete [] myArray;
    return 0;
}