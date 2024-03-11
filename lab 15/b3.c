#include <stdio.h>  
void main ()  
{  
    int i=0,n,temp=0;
    printf("Enter value of n : ");
    scanf("%d",&n);
    int arr[n],j=n-1;
    for(i=0;i<n;i++)
    {
        printf("Enter value of %d element : ",i);
        scanf("%d",&arr[i]);
    }
    printf("\nAfter reversing : ");
    for(i=0;i<j;i++,j--)
    {
          temp = arr[i];
          arr[i] = arr[j];
          arr[j] = temp;
         
    printf("Value of %d Element = %d\n",i,arr[i]);
    }
    for(i=j;i<n;i++)
    {
         printf("Value of %d Element = %d\n",i,arr[i]);
         
    }