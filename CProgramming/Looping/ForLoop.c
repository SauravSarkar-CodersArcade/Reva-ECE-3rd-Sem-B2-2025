#include <stdio.h>
int main() {
	int a = 10;
    int b = 20;
    printf("%d\n", a++ + b++); // 30
    // Unary operators have no difference in the looping statements 
    // i++ or ++i is same inside a loop
    for(int i=1; i<6; i++){
        printf("%d ", i); // 1,2,3,4,5
    }
    printf("\n");
    for(int i=1; i<6; ++i){
        printf("%d ", i); // 1,2,3,4,5
    }
    return 0;
}

