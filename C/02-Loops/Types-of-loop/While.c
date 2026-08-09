#include<stdio.h>

int main(){
    int a=50;
    while (a>45)//AS LONG AS a is > 45 the I love barcelona will be printed 
    {
        printf("I love Barcelona\n");
        a = a - 1;// each time it gets printed 1 is substracted from a so after some time a will become equal to 45 w hich doesnt satisfy the condition and hence it will stop printing and the code stops
    }
    
    return 0;
}