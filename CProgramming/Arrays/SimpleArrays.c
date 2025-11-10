#include<stdio.h>
int main(){
    int arr[] = {21,32,13,44,25,34,99,100,200,1000};
    // Dynamic Formula for size of an array in C, C++
    int size = sizeof(arr) / sizeof(arr[0]); // 8x4=32/4=8
    for(int i=0; i<size; i++){
        printf("%d ", *arr); // i = 0 to 4 // 1st element 5 Times
    }
    printf("\n");
    for(int i=0; i<size; i++){
        printf("%d ", *arr+i); // i = 0 to 4 // 1st element + i
    }
    printf("\n");
    for(int i=0; i<size; i++){
        printf("%d ", *(arr+i)); // i = 0 to 4 // All array elements
    }
    return 0;
}