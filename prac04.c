//write a c program to check whether a year is leap year or not.
#include<stdio.h>
int main()
{
    int year;
    printf("Enter any year:  ");
    scanf("%d",&year);
    if((year%4==0&&year%100!=0)||(year%400==0))
    {
        printf("year is leap year");
    }
    else
    {
        printf("Year is not leap year");
    }
    return 0;
}
