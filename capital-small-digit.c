#include<stdio.h>

int main(){

    char ch;
    scanf("%c", &ch);

    int X = ch;

    if(X >= 48 && X <= 57){
        printf("IS DIGIT");
    }

    if(X >= 65 && X <= 90){
        printf("ALPHA\nIS CAPITAL");
    }
    
    if(X >= 97 && X <= 122){
        printf("ALPHA\nIS SMALL");
    }

}