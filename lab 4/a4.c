#include<stdio.h>
void main(){
    int a,b,c,d;
    printf("enter the 1st number : ");
    scanf("%d",&a);
    printf("enter the 2nd number : ");
    scanf("%d",&b);
    printf("enter the 3rd number : ");
    scanf("%d",&c);
    d=(a+b+c);
    d=d/3;
    printf("average of %d,%d,%d is %d",a,b,c,d);
}