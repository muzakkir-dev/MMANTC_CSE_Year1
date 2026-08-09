#include<stdio.h>

int main(){
    for (int a=5;a<=100; a++)
    {
        if (a%3==0 && a%5!=0)
        {
            printf("%d\n",a);
        }
        else if (a%5==0 && a%3!=0)
        {
            printf("%d\n",a);
        }
        
    }
    
    return 0;
}