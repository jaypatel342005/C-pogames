#include <stdio.h>
void main() 
{
    int n,i,neg=0;
    printf("Enter value of n : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter %d number : \n",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            neg = neg + 1;
        }
    }
    printf("Total Negative Numbers = %d",neg);
}