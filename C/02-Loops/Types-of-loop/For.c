#include<stdio.h>

int main(){
    int i,skip=5;
    for ( i = 1; i < 7; i++)
    {
        if (i==skip)
        {
            continue;
        }
           
        printf("The value of i is %d\n",i);
    }
    
    return 0;
}