// a c program to check whether a given integer is even or odd.
#include<stdio.h>
int main()
{
    int number;
    printf("Enter an integer number:  ");
    scanf("%d",&number);
    if(number%2==0)
    {
        printf("it is an even number",number);
    }
    else
    {
        printf("it is an odd number",number);
    }
    return 0;
}
