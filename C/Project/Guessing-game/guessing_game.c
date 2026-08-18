#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(NULL));
    int number = (rand()%100)+1;
    int a;
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
    }
}
printf("Congrats, you guessed it!\n");
    return 0;
}