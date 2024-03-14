
#include<stdio.h>
int fact(int);
void main()
{
    int i;
    printf("Enter an integer : ");
    scanf("%d",&i);
    int res = fact(i);
    printf("Factorial = %d",res);
}
int fact(int n)
{
    int f=1;
   while(n>0)
   {
       f = f*n;
       n--;
   }
   return f;
}
