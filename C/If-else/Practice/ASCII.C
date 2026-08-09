#include<stdio.h>

int main(){
    char ch;
    printf("Enter the character\n");
    scanf("%c",&ch);
    if (ch>=a && ch<=z)
    {
        printf("This character is lowercase and its ASCII value is %d\n",ch);
    }
    else if (ch>=A && ch<=Z)
    {
        printf("This character is uppercase and its ASCII value is%d\n",ch);
    }
    else
    {
        printf("The given character is not in the english alphabet and is a special character with ASCII value %d\n",ch);
    }
    return 0;
}