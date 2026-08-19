#include<stdio.h>
int sum(int,int);
int sum(int x, int y){
    printf("The sum is %d\n",x+y);
    return x+y;
}
int main(){
    int a=1,b=3;
    int c = sum(a,b); sum(c,b); sum(a,c);
    int d=2, e = 2;
            sum(d,e); sum(c,d);
    return 0;
}