#include<stdio.h>

int main(){
    int Year;
    printf("Enter the year\n");
    scanf("%d",&Year);
    if (Year%4==0 && Year%100!=0 || Year%400==0)
    {
        printf("The year is a leap year\n");
    }
    else
    {
        printf("The year is not a leap year\n");
    }
    
    return 0;
}