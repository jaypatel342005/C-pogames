#include<stdio.h>
void arr(int a[],int n);
void main()
{
    int i,n;
    printf("Enter value of n : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
            
        printf("Enter value of %d element : ",i);
        scanf("%d",&a[i]);
    }
        arr(a,n);
    
        
}
void arr(int a[],int n)
{
    int i=0,element=0;
     for(i=0;i<n;i++)
     {
         element = a[i];
         printf("\nElement = %d",element);
     }
}