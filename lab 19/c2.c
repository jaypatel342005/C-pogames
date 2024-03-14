#include<stdio.h>
int fact(int);
void main()
{
    int n,r;
    printf("Enter value of n : ");
    scanf("%d",&n);
    printf("Enter value of r : ");
    scanf("%d",&r);
    int ncr = fact(n)/(fact(r)*fact(n-r)),npr = fact(n)/fact(n-r);
    printf("Permutation = %d",npr);
    printf("\nCombination = %d",ncr);
}
int fact(int f)
{
    int i,j=1;
    for(i=f-1;i>=1;i--)
    {
        f = f*i;
        
    }
    return f;
}