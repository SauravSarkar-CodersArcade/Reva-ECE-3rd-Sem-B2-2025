#include<stdio.h>
int main(){
    int arr[] = {1,1,3,4,2,2};
    int result = 0;
    for(int i=0; i<6; i++){
        result = result ^ arr[i];
    }
    printf("The unique element is: %d\n", result);
    return 0;
    // DRY RUN 
}