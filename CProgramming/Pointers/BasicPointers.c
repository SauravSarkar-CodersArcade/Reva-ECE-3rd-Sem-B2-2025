#include<stdio.h>
int main(){
    int a = 10; // 100x00 
    printf("Address of a using address oprator: %d\n", &a);
    printf("Hexa Address of a using address oprator: %p\n", &a);
    printf("Base Address of a using address oprator: %x\n", &a);
    int * ptr = &a; // 100x00
    printf("Address of a using pointer: %x\n", ptr);
    printf("Value of a using pointer: %d\n", *ptr);
    // De-referencing -> deriving value from pointer
    printf("Address of ptr using address oprator: %x\n", &ptr);
    int ** dPtr = &ptr;
    printf("Address of ptr using dPtr: %x\n", dPtr);
    printf("Value of a using dPtr: %d\n", **dPtr);
    printf("%d", *(&a));
    return 0;
}