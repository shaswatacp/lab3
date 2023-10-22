//A c program to demonstrate the use of else if ladder.
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter two integers :  ");
    scanf("%d %d",&num1,&num2);
    if(num1==num2)
    {
        printf("result :%d=%d",num1,num2);
    }
    else if(num1>num2)
    {
        printf("result :%d>%d",num1,num2);
    }
    else
    {
        printf("result:%d<%d",num1,num2);
    }
    return 0;
}
