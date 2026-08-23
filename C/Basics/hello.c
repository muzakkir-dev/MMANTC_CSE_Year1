#include<stdio.h>       // Adds the basic funtion such as printf
#include<cs50.h>        //Adds the functions from the cs50 library
int main(void){         // it is what is going to be run so basically the main block of code
   string name = get_string("What is your name? "); 
        printf("Hello, %s\n",name); // Output: It gives Hello, (name) 
    return 0;
}