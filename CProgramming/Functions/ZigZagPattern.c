#include<stdio.h>
// The variables defined during function definition are parameters
void zigZag(int cols){ // cols -> parameter
    for(int r=1; r<=3; r++){
        for(int c=1; c<=cols; c++){
            if((r==1 && c%4==3) || (r==2 && c%2==0) || (r==3 && c%4==1)){
                printf("* ");
            }else{
                printf("  ");
            }
        }printf("\n");
    }
}
int main(){
    // The actual values used during function call are called arguments.
    zigZag(13); // 9 -> Argument
    zigZag(17);
    return 0;
}