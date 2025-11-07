#include<stdio.h>
enum weekday {
    mon, tue, wed, thu, fri=22, sat, sun
};
enum priority{
    HIGH, LOW, MEDIUM
};
int main(){
    // By default it starts from 0, but we can start from some other values
    // as well
    // It is integer by default
    // So, the size if 4 bytes
    enum weekday day=wed; 
    printf("The day is %d", day);
    // The correct format specifier for sizeof() is lu - long unsigned
    // Sometimes we can use zu -> binary unsigned 
    printf("The size of the enum is: %zu bytes", sizeof(day));
    return 0;
}