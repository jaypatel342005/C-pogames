//CALL BY REFERENCE
#include<stdio.h>
void swap(int*,int*);
void main()
{
    int *a,*b;
    printf("Enter value of a : ");
    scanf("%d",&a);
    printf("Enter value of b : ");
    scanf("%d",&b);
    swap(&a,&b);
}
void swap(int *i,int *j)
{
    *i = *i-*j;
    *j = *i+*j;
    *i = *j-*i;
    printf("After swapping\n value of a = %d \n value of b = %d ",*i,*j);
}