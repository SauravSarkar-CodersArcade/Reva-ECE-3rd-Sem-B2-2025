#include <stdio.h>
// 8822185799 
int maxRegions(int n){
    return ((n * (n+1))/2) + 1;
}
int maxPieces(int n){
    return ((n * (n+1))/2) + 1;
}
int main() {
	int n1 = 3;
    printf("Max Pieces: %d\n", maxPieces(n1));
    int n2 = 6;
    printf("Max Regions: %d\n", maxRegions(n2));
    return 0;
}

