#include<stdio.h>
#include<string.h>
union Employee {
    char name[20];
    int age;
    int salary;
};
int main(){
    char data[20] = "Reva";
    union Employee e1;
    //e1.name = "Rahul"; // Static Memory Allocation - Not Allowed
    strcpy(e1.name, "Rahul");
    printf("%s\n", e1.name);
    e1.age = 22;
    printf("%d\n",e1.age);
    e1.salary = 30000;
    printf("Size of the struct: %zu bytes\n", sizeof(e1));
    printf("%d\n",e1.salary);
    return 0;
}