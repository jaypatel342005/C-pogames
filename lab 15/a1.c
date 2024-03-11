#include <stdio.h>
void main() 
{
    int n,i,j;
    printf("Enter value of n : ");
    scanf("%d",&n);
    int arr1[n],arr2[n];
    for(i=0;i<n;i++)
    {
        printf("Enter %d number : \n",i);
        scanf("%d",&arr1[i]);
    }
    printf("After Copying From Array1 to Array2 , values of Array2 are : ");
    for(i=0;i<n;i++)
    {
        arr2[i] = arr1[i];
        printf("\n%d Element value = %d ",i,arr2[i]);
    }
    
}