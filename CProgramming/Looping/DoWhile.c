#include <stdio.h>
int main() {
	int a = 5;
    // Even though the condition is not true, it will execute at least once
    // Then the condition is checked, and if true it is continued
    // Or else it is aborted.
    // That's why the do-while loop is called exit-controlled loop
    do
    {
        printf("%d ", a);
        a -= 1;
    } while (a > 0);
    
    return 0;
}

