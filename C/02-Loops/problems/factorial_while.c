#include<stdio.h>

int main(){
    int i,product=1,n;
    printf("Enter\n");
    scanf("%d",&n);
    i=n;
    while (i>0)
    {
        product*=i;i--;
    }
    printf("The factorial of %d is %d\n",n,product);

    return 0;
}