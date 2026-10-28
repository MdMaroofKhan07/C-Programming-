/*Write a program to find if a character entered by
user is upper case or not.*/ 
#include <stdio.h>
int main() {
    char ch;
    printf("Enter character:");
    scanf("%c",&ch);

    if(ch >= 'A' && ch <= 'Z') {
        printf("Upper case\n");
    }
    else if(ch >='a' && ch <= 'z') {
        printf("Lower case\n");
    }
    else{
        printf("Not English letter\n");
    }
    return 0;
}