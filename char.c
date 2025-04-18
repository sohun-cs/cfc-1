#include<stdio.h>
#include<ctype.h>

int main(){

    char ch;

    scanf("%c", &ch);

    char upper = toupper(ch);
    char lower = tolower(ch);

    // printf("%c", ch);
    // printf("%c", upper + 32);

    if(ch == upper + 32){
        printf("%c", upper);
    }
    else{
        printf("%c", lower);
    }
}