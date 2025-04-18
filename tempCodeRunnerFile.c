#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    int min = A, max = A;

    // Minimum Value
    if(B < min){
        return min = B;
    }
    if (C < min){
        return min = C;