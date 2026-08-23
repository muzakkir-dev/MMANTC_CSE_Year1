#include<stdio.h>
#include<cs50.h>

int main(){
    int n = get_int("How many times do you want \"'Hello, World'\" to be printed? ");
        while (n>0)
        {
            printf("Hello, World\n");
            n--;
        }
        
    return 0;
}