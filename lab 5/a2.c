#include<stdio.h>
void main(){

    int a,b,temp;

    printf("enter the value of a : ");
    scanf("%d",&a);
    printf("enter the value of b : ");
    scanf("%d",&b);

    temp=a;
    a=b;
    b=temp;

    //or
    //a=a+b   
    //b=a-b    
    //a=a-b 
    //or
    //a=a*b   
    //b=a/b    
    //a=a/b 

    printf("value of a after swap is %d \nand value of b after swap is %d",a,b);
    
}