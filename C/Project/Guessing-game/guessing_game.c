/*Write a complete C program to implement a user-interactive Number Guessing Game.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(NULL));
    int number = (rand()%100)+1;
    int a,b=1;
    printf("Enter your guess\n");
    scanf("%d",&a);
    while (a!=number)
{
    if (a>number)
    {
        printf("Go lower\n");
         scanf("%d",&a);
    }
    else
    {
        printf("Go higher\n");
         scanf("%d",&a);
    }b++;
}
printf("Congrats, you guessed it in %d tries!\n",b);
    return 0;
}