#include<stdio.h>
#include<math.h>
int countDigits(int n){
    int count = 0;
    if(n == 0){
        count = 1;
    }else{
        // For negative numbers
        if(n < 0){
            n = -n;
        }
        while(n != 0){
            n = n / 10;
            count++;
        }
    }
    return count;
}
void armstrongNumber(int n){
    int original = n;
    int result = 0;
    int digits = countDigits(n);
    int remainder;
    while(n != 0){
    remainder = n % 10;
    result += pow(remainder, digits);
    n = n / 10;
    }
    if(result == original){
        printf("Armstrong Number");
    }else{
        printf("Not an Armstrong Number");
    }
}
int main(){
    int n = 1634;
    int digits = countDigits(n);
    printf("No of digits: %d\n", digits);
    armstrongNumber(n);
}