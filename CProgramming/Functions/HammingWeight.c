#include<stdio.h>
int hammingWeight(int n){
    int count = 0;
    while(n){
        if(n & 1){
            count++;
        }
        n = n >> 1;
    }
    return count;
}
int main(){
    printf("Hamming Weight of 11: %d\n", hammingWeight(11));
    printf("Hamming Weight of 5: %d\n", hammingWeight(5));
    printf("Hamming Weight of 10: %d\n", hammingWeight(10));
    printf("Hamming Weight of 0: %d\n", hammingWeight(0));
    return 0;
}