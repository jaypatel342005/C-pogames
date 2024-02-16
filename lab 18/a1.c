#include<stdio.h>
int add(int , int );
void main(){
    int a,b,c;
    printf("enter the 1st number : ");
    scanf("%d",&a);
    printf("enter the 2nd number : ");
    scanf("%d",&b);
    c=add(a,b);    
    printf("sum of %d and %d is %d",a,b,c);
}
int add(int a, int b){
    return a+b;
}