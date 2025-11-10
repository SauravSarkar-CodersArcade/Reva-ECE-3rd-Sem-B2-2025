#include<stdio.h>
int KadaneAlgo(int arr[], int n){
    int cmax = arr[0];
    int gmax = arr[0];
    for(int i=1; i<n; i++){
        cmax = (arr[i] > cmax + arr[i]) ? arr[i] : cmax + arr[i];
        gmax = (gmax > cmax) ? gmax : cmax;
    }
    return gmax;
}
int main(){
    int arr[] = {5,-8,1,2,-1,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxSubarraySum = KadaneAlgo(arr, n);
    printf("%d", maxSubarraySum);
    return 0;
}