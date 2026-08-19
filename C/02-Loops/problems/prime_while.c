#include<stdio.h>

int main(){
        int n;
        int prime=0;
        int i=2;
        printf("Enter\n");
        scanf("%d",&n);
        if (n==0 || n==1)
        {
            prime=1;
        }
        else
        { while (i<n)
        {
            if (n%i==0)
            {
                prime=1;break;
            }
           i++; 
        }                                             
        }
        if (prime)
        {
            printf("%d is not a prime number\n",n);
        }
        else
        {
            printf("%d is a prime number\n",n);
        }
    return 0;
}