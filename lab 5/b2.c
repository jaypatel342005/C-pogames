#include<stdio.h>
void main(){
    int a;
    printf("enter the number : ");
    scanf("%d",&a);
    a & 1 ? printf("%d number is odd",a) : printf("%d number is even",a); 
}