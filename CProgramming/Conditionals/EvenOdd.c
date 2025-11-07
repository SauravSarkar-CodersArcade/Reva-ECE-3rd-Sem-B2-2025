#include <stdio.h>
int main() {
	int n = 21; // 0010 // 3 - 0011 0101
    //             0001 F      0001 0001 T
    if( n & 1){
        printf("Odd");
    }else{
        printf("Even");
    }
    return 0;
}

