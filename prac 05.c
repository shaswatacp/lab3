//Write a c program to enter all sides of a triangle and check whether the triangle is valid or not.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three sides of triangle:  ");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c&&b+c>a&&c+a>b)
    {
        printf("triangle is valid");
    }
    else
    {
        printf("Triangle is not valid");
    }
    return 0;
}
