#include<stdio.h>
void main(){
    int c,f;
    printf("enter the temperature in fahrenheit : ");
    scanf("%d",&f);
    c=(((f-32)*5)/9);
    printf("temperature in celsius is %d",c);
}