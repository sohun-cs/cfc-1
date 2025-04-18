

#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    int min = A, max = A;

    // Minimum Value
    if(B < min){
        min = B;
    }
    if (C < min){
        min = C;
    }

    // Maximum Value
    if(B > max){
        max = B;
    }
    if(C > max){
        max = C;
    }

    printf("%d %d", min, max);

    return 0;
}


