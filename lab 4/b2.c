#include<stdio.h>
void main(){
    int i,p,r,n;
    printf(" enter the initial principal balance : ");
    scanf("%d",&p);
    printf(" enter the annual interest rate : ");
    scanf("%d",&r);
    printf(" enter the time (in years) : ");
    scanf("%d",&n);
    i=(p*r*n)/100;
    printf(" simpal interest is %d ",i);
}