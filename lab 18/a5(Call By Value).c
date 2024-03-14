//CALL BY VALUE
#include<stdio.h>
void swap(int,int);
void main()
{
    int a,b;
    printf("Enter value of a : ");
    scanf("%d",&a);
    printf("Enter value of b : ");
    scanf("%d",&b);
    printf("Before swapping\n value of a = %d \n value of b = %d ",a,b);
    swap(a,b);
    printf("\nAfter swapping value in main function\n value of a = %d \n value of b = %d ",a,b);
}
void swap(int a,int b)
{
    int temp=0;
    temp = a;
    a = b;
    a = temp;
    printf("Value in swap function = %d %d\n",a,b);
}