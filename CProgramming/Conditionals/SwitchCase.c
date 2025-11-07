#include <stdio.h>
#include<ctype.h>
int main() {
	// Given a character, check whether the character is a vowel or consonant
    // a,e,i,o,u,A,E,I,O,U are vowels, rest all are consonants.
    char ch;
    printf("Enter the character:\n");
    scanf("%c", &ch);
    if(!isalpha(ch)){
        printf("Please enter an alphabet. Wrong Input.\n");
        return 0;
    }
    switch(tolower(ch)){
        case 'a':
        case 'e':  
        case 'i':
        case 'o':
        case 'u':
            printf("Vowel");
            break;
        default:
            printf("Consonant");                                        
    }  
    return 0;
}

