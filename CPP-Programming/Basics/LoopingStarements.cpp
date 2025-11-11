#include<iostream>
using namespace std;
int main()
{
    int arr[] = {2,4,5,1,3,7,9};
    int size = sizeof(arr) / sizeof(arr[0]);
    // Traditional For Loop
    for(int i=0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    // For Each Loop | Enhanced For Loop
    for (int x : arr){
        cout << x << " ";
    }
    cout << endl;
    /*
    for (data_type var_name : collection){
        statements;
    }
    */
   for (auto x : arr){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}