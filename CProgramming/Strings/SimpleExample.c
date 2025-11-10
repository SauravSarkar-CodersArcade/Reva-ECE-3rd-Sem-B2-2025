#include<stdio.h>
#include<string.h>
int main(){
    char name[50];
    // scanf() /// Not recommended
    // gets(name); // This is not a safe method to be used
    fgets(name, sizeof(name), stdin);
    printf("%s\n", name);
    char s1[100] = "Reva ";
    char s2[100] = "University";
    char result[200];
    strcpy(result, s1);
    strcat(result, s2);
    printf("\n%s\n", result);
    char pass1[] = "reva@123";
    char pass2[20];
    printf("Enter the password: ");
    scanf("%s", &pass2);
    if(strcmp(pass1, pass2) == 0){
        printf("\nAccess Granted!");
    }else{
        printf("\nAccess Denied!");
    }
    return 0;
}