#include<stdio.h>
int power(int,int);
void main()
{
    int a,b;
    printf("Enter exponent : ");
    scanf("%d",&a);
    printf("\nEnter power : ");
    scanf("%d",&b);
  int ans = power(a,b);
  printf("Answer = %d",ans);
}
int power(int x,int y)
{
    if(y==0)
    {
        return 1;
    }
    else
    {
        return x*power(x,y-1);
    }
}