#include<stdio.h>
void palindrome(int n){
    int rev = 0;
    // Before doing the operation, store n into another variable
    // Because, n will become 0 after the while loop
    int original = n;
    while(n > 0){
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    if(rev == original){
        printf("%d is a palindrome.\n", original);
    }else
    {
        printf("%d is a not palindrome.\n", original);
    }
}
int main(){
    palindrome(123);
    palindrome(120);
    palindrome(456);
    palindrome(1331);
    return 0;
}