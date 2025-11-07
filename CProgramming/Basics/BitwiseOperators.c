#include<stdio.h>
int main(){
    printf("Bitwise AND: %d\n", 7 & 6);
    printf("Bitwise OR: %d\n", 8 | 9);
    printf("Bitwise XOR: %d\n", 11 ^ 15); // S -> 0, D -> 1
    printf("Bitwise Right Shift: %d\n", 10 >> 2);
    printf("Bitwise Left Shift: %d\n", 10 << 2);
    printf("Bitwise NOT: %d\n", ~-5000);
    return 0;
}