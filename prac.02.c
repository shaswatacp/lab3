//write a c program to check whether a number is positive,negative or zero.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter an integer  :");
    scanf("%d",&a);
    if(a==0)
    {
        printf("your input is zero");
    }
    else if(a>0)
    {
        printf("Your input is positive");
    }
    else
    {
        printf("your input is negative");
    }
    return 0;
}
