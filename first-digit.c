#include<stdio.h>
#include<math.h>

int main(){

    int X, firstDigit;
    scanf("%d", &X);

    firstDigit = X / 1000;

    //printf("%d", X);
    //printf("%d", firstDigit);

    if (firstDigit % 2 == 0){
        printf("EVEN");
    }
    else{
        printf("ODD");
    }

}