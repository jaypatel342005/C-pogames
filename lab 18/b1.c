#include<stdio.h>
int fibbo(int);
void main()
{
    int i,n;
    printf("Enter value of n : ");
    scanf("%d",&n);
    printf("Fibonacci Series : \n");
    for(i=1;i<=n;i++)
    {
        printf("%d ",fibbo(i));
    }
}
int fibbo(int n)
{
    if(n==1)
    {
        return 0;

    }
    if(n==2)
    {
        return 1;

    }
    else
    {
        return fibbo(n-2) + fibbo(n-1);

    }
}