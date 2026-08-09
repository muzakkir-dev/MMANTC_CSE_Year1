#include<stdio.h>

int main(){
    float a,b;
    printf("Enter the first number\n");
    scanf("%f",&a);
    printf("Enter the second number\n");
    scanf("%f",&b);
    if (a>b)
    {
        printf("%.2f is greater\n",a);
    }
    else if (b>a)
    {
        printf("%.2f is greater\n",b);
    }
    else
    {
        printf("Both the numbers are equal\n");
    }
    
    return 0;
}