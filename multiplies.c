#include <stdio.h>

int main(){

    long long A, B;

    scanf("%lld %lld", &A, &B);

    if(B % A == 0 | A % B == 0){
        printf("Multiples");
    }else{
        printf("No Multiples");
    }

}