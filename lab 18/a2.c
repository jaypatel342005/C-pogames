#include<stdio.h>
int min(int,int);
int max(int,int);
void main()
{
    int a,b,maximum,minimum;
    printf("Enter 2 numbers : ");
    scanf("%d %d",&a,&b);
    maximum = max(a,b);
    minimum = min(a,b);
    printf("\nMax = %d",maximum);
    printf("\nMin = %d",minimum);
}
int min(int a,int b)
{
    return (a<b)?a:b;
}
int max(int a,int b)
{
    return (a>b)?a:b;
}