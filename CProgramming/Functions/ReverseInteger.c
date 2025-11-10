#include<stdio.h>
int reverseInteger(int n){
    int rev = 0;
    while(n > 0){
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    return rev;
}
int main(){
    printf("The rev of 123 is %d\n", reverseInteger(123));
    printf("The rev of 120 is %d\n", reverseInteger(120));
    printf("The rev of 456 is %d\n", reverseInteger(456));
    printf("The rev of 1331 is %d\n", reverseInteger(1331));
    return 0;
}