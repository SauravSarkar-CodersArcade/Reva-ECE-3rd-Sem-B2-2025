#include<stdio.h>
int main(){
    int a = 10;
    int b = 20;
    printf("%d", a++ + b++); // 10 + 20 = 30 // Postfix - Updated Later
    printf("\na = %d, b = %d", a,b);
    int c = 10;
    int d = 20;
    printf("\n%d", ++c + ++d); // 11 + 21 = 32 // Prefix - Updated Instantly
    printf("\nc = %d, d = %d\n", a,b);
    int age = 21;
    (age >= 18) ? printf("Eligible") : printf("Not Eligible");
    return 0;
}