#include<stdio.h>

int main(){
    int marks;
    char c;
    printf("Enter your marks\n");
    scanf("%d",&marks);
   if (marks>=0 && marks <101)
   {
    if (marks>=90)
    {
        c = 'A';
    }
    else if (marks>=80)
    {
        c = 'B';
    }
    else if (marks>=70)
    {
        c = 'C';
    }
    else if (marks>=60)
    {
        c = 'D';
    }
    else
    {
        c = 'F';
    }
    printf("Your grade is %c",c);
    }
    else
    {
        printf("Invalid marks\n");
    }
    return 0;
}