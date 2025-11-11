#include<stdio.h>
int * function(){ // Scope 1
    static int x = 20; // [20] -> Address -> 0x2000 Global
    return &x; // -> 0x2000
    // y -> Can't be accessed here 
}
int main(){ // Scope 2
    int y = 2; // Local variable
    int * ptr = function(); // -> 0x2000 -> *ptr - de-referencing
    printf("The value of x is: %d\n", *ptr);
    return 0;
}
// If a pointer is trying to access data / address of another scope,
// the pointer is called a Dangling Pointer
// How to solve this problem ???? By using storage classes 