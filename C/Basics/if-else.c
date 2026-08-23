#include<stdio.h>
#include<cs50.h>
int main(){
    int x = get_int("What is the value of x? ");
    int y = get_int("What is the value of y? ");
    if (x>y)
    {
        printf("%i is greater than %i\n",x,y); //%i and %d both can be used for int.
    }
    else if (x<y)
    {
        printf("%i is greater than %i\n",y,x);
    }
    else
    {
        printf("Both the values are equal, %i = %i \n",x,y);
    }
    
    return 0;
}