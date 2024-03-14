#include<stdio.h>
#include<math.h>
int rev(int);
void main()
{
    int a;
    printf("Enter an integer : ");
    scanf("%d",&a);
    int res = rev(a);
    printf("Reverse of the number = %d",res);
}
int rev(int a)
{
    
    int digit = (int) log10(a);
   if(a==0)
   {
        return 0;
   }
   else
    return ((a%10 * pow(10, digit)) + rev(a/10));
}