
#include<stdio.h>
void swap(int *,int *,int);
void main()
{
    int i,n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int a1[n],a2[n];
    printf("\nArray 1 : ");
    for(i=0;i<n;i++)
    {
        printf("\nEnter value of %d element : ",i);
        scanf("%d",&a1[i]);
    }
    printf("\nArray 2 : ");
    for(i=0;i<n;i++)
    {
        printf("\nEnter value of %d element : ",i);
        scanf("%d",&a2[i]);
    }
    swap(a1,a2,n);
    printf("\nAfter swapping : ");
    printf("\nArray 1 :");
    for(i=0;i<n;i++)
    {
        printf("\nValue of %d element = %d",i,a1[i]);
    }
    printf("\nArray 2 : ");
    for(i=0;i<n;i++)
    {
        printf("\nValue of %d element = %d",i,a2[i]);
    }
    
}
void swap(int *a1,int *a2,int n)
{
    int i,temp=0;
    for(i=0;i<n;i++)
    {
        temp = a1[i];
        a1[i] = a2[i];
        a2[i] = temp;
    }
}
s