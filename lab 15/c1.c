#include <stdio.h>  
void main ()  
{  
     int n,i,j,max1=0,max2=0;
     printf("Enter value of n : ");
     scanf("%d",&n);
     int arr[n];
     for(i=0;i<n;i++)
     {
         printf("Enter value of %d element = \n",i);
         scanf("%d",&arr[i]);
     }
     for(i=0;i<n;i++)
     {
         if(max1<arr[i])
         {
             max1 = arr[i];
         }
     }
     for(i=0;i<n;i++)
    {
        
        if (arr[i] > max2 && arr[i] < max1)
        {
			max2=arr[i];
        }
    }
    printf("Largest = %d \n Second Largest value = %d",max1,max2);
}  