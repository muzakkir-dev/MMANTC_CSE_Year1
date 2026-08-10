#include<stdio.h>

int main(){
    int sum=0,i=0;
    do
    {
        sum+=i;i++;
    } while (i<=10);
    printf("The sum of first 10 natural numbers is %d\n",sum);
    return 0;
}