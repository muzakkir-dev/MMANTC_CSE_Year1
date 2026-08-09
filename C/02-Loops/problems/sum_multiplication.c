#include<stdio.h>

int main(){
    int sum=0,multiplication=0,n=8;
    for (int i = 0; i <=10;i++)
    {
        multiplication=n*i;sum+=multiplication;
    }
    printf("The sum of the multiplication table of %d is %d\n",n,sum);
    return 0;
}