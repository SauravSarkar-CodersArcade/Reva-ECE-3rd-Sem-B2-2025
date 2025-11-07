#include <stdio.h>
int main() {
	int a = 16;
    if(a % 2 == 0)
        if(a % 4 == 0)
            printf("%d is an even number & also divisible by 4", a);
        else
            printf("%d is an even number but not divisible by 4", a);    
    else
        if(a % 3 == 0)
            printf("%d is an odd number & also divisible by 3", a);
        else
            printf("%d is an odd number but not divisible by 3", a);   
    return 0;
}

