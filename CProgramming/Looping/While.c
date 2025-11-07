#include <stdio.h>
int main() {
    // Only if the condition is true, the control enters the loop.
    // So the while loop is called an entry controlled loop.
	int a = 50;
    while(a > 10){
        printf("%d ", a);
        a -= 10;
    }
    return 0;
}

