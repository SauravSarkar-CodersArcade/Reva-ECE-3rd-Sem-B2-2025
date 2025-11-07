#include <stdio.h>
int main() {
	for(int r=1; r<=10; r++){ // r=1
        for(int c=1; c<=10; c++){
            // 1 x 1 = 1 // %d x %d = %d
            printf("%dx%d=%d\t", r,c, r*c);
        }printf("\n");
    }
    // The working principle:
    /*
    Unless & until the inner loop finishes the iteration, the outer loop
    will not get incremented.
    Unlesss c is not completed from 1-10, r will not move from 1 to 2
    r=1
        c=1,2,3,...10
    r=2
        c=1,2,3,...10
    .
    .
    .
    r=10
        c=1,2,3,...10         
    */
    return 0;
}

