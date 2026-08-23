#include <cs50.h>
#include<stdio.h>

int main(){
    int n = get_int("How many times do you want \"'Hello, World'\" to be printed? ");
    for (n; n > 0; n--)
    {
        printf("Hello, World\n");
    }
    return 0;
}