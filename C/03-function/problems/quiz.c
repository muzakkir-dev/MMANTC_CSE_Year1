#include<stdio.h>
void goodmorning();
void goodafternoon();
void goodevening();
void goodmorning(){
    printf("Good morning\n");
}
void goodafternoon(){
    printf("Good afternoon\n");
}
void goodevening(){
    printf("Good evening\n");
}
int main(){
    goodmorning();
    goodafternoon();
    goodevening();
    return 0;
}