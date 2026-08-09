#include<stdio.h>

int main(){
    float a,b,c;
    printf("Enter the first number\n");
    scanf("%f",&a);
    printf("Enter the second number\n");
    scanf("%f",&b);
    printf("Enter the third number\n");
    scanf("%f",&c);
    if (a==b && a==c)
    {
        printf("All the numbers are equal\n");
    }
    else if (a>=b && a>=c)
    {
        printf("%.2f is the greatest value\n",a);
    }
    else if (b>=a && b>=c)
    {
        printf("%.2f is the greatest value\n",b);
    }
    else
    {
        printf("%.2f is the greatest value\n",c);
    }
    return 0;
}