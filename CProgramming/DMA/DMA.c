#include<stdio.h>
#include<stdlib.h> // DMA
int main(){
    // int arr[5] = {1,2,3}; // 8 bytes wasted 1,2,3,0,0
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d", &n);
    int * ptr;
    // Use of malloc()
    // ptr = (int*)malloc(n * sizeof(int)); // Dynamic Array of size n
    // Use of calloc()
    ptr = (int*) calloc(n, sizeof(int));
    printf("Enter the %d elements of the array:\n", n);
    for(int i=0; i<n; i++){
        scanf("%d", &ptr[i]);
    }
    printf("The array elements are:\n");
    for(int i=0; i<n; i++){
        printf("%d ", ptr[i]);
    }
    printf("\nEnter the new size of the array:\n");
    scanf("%d", &n);
    ptr = realloc(ptr, n * sizeof(int));
    printf("Enter the %d new elements of the array:\n", n);
    for(int i=0; i<n; i++){
        scanf("%d", &ptr[i]);
    }
    printf("The new array elements are:\n");
    for(int i=0; i<n; i++){
        printf("%d ", ptr[i]);
    }
    free(ptr);
    return 0;
}