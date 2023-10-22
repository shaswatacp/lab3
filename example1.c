//A c program to evaluate the ratio of (a+b) to (c-d) and will print the result if (c-d) is not equal to zero.
#include<stdio.h>
int main()
{
    int a,b,c,d;
    float  ratio;
    printf("Enter all the four values:  ");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    if(c-d!=0){ratio=(a+b)/(c-d);
        printf("ratio=%f\n",ratio);
    }
    return 0;
}
