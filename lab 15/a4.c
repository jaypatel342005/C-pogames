#include <stdio.h>
void main() 
{
    int n,i,count=0,search;
    printf("Enter value of n : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter %d number : \n",i);
        scanf("%d",&arr[i]);
    }
    printf("Seach the element : ");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(arr[i] == search)
        {
            printf("The element %d is in %d Index\n",search,i);
        }
    }
}