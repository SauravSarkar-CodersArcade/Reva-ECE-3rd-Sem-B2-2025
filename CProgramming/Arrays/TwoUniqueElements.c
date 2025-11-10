#include<stdio.h>
void twoUniqueElements(int arr[], int n){
    int num1 = 0, num2 = 0;
    int xorAll = 0;
    for(int i=0; i<n; i++){
        xorAll ^= arr[i]; 
    }
    int rsb = xorAll & -xorAll;
    for(int i=0; i<n; i++){
        if((arr[i] & rsb) == 1){
            num1 ^= arr[i];
        }else{
            num2 ^= arr[i]; 
        }
    }
    printf("Num1: %d, Num2: %d\n", num1, num2);
}
int main(){
    int arr[] = {1,2,3,4,2,1};
    int n = 6;
    twoUniqueElements(arr, n);
}