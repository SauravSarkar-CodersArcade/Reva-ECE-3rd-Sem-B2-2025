#include<stdio.h>
int sumOfSquares(int n){
    int rem, sum = 0;
    while(n != 0){
        rem = n % 10;
        sum += rem * rem;
        n = n / 10;
    }
    return sum;
}
int isHappyNumber(int n){
    int result = n;
    while(result != 1 && result != 4){
        result = sumOfSquares(result);
    }
    if(result == 1){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int n1 = 19, n2 = 20;
    if(isHappyNumber(n1)){
        printf("%d is happy:\n", n1);
    }else{
        printf("%d is unhappy:\n", n1);
    }
    if(isHappyNumber(n2)){
        printf("%d is happy:\n", n2);
    }else{
        printf("%d is unhappy:\n", n2);
    }
    return 0;
}