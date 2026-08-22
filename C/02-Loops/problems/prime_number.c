/*Write a complete, user-interactive C program to check whether a given integer is a prime number.*/

#include<stdio.h>

    int main(){
        int n;
        int t=0;
        printf("Enter\n");
        scanf("%d",&n);
        if (n==0 || n==1)
        {
            t=1;
        }
        else
        {
        for (int i = 2; i < n; i++)
        {
            if (n%i==0)
            {
                t=1;
                break;
            }
        }
    }
        if (t)
        {
            printf("%d is not a prime number\n",n);
        }
        
        else
        {
            printf("%d is a prime number\n",n);
        }
        return 0;
    }