#include<stdio.h>
#include<cs50.h>

int main(){
    int n = get_int("How many times do you want \"'Hello, World'\" to be printed? "); //get_int is a function from cs50 library which takes the int input from the user. i defined an int n in which i stored the input taken from the user and used it later in the code.
        while (n>0)                                     //the while loop runs again and again as long as the conditions are met.
        {
            printf("Hello, World\n");
            n--;                                        //in n-- the "--" is a decrementing operator which in simple words means subtract 1 from n so n-- = n-=1, n=n-1,
        }
        
    return 0;
}