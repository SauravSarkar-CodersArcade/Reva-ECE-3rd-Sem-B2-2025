#include<stdio.h>
int * function(){
    int x = 20; // 0x2000
    return &x; // 0x2000
}
int main(){
    int * ptr = function(); // 0x2000
    printf("The value of x is: %d", *ptr);
    return 0;
}