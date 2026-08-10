#include<stdio.h>

int main(){
    for (int i = 0; i <= 10; i++)
    {
        if (i==9)
        {
            continue;
        }
        printf("I love barcelona %d times\n",i);
    }
    
    return 0;
}