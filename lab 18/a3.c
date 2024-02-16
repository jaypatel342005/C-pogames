#include<stdio.h>
int interest(int ,int ,int );
void main(){
    int i,p,r,n;
    printf(" enter the initial principal balance : ");
    scanf("%d",&p);
    printf(" enter the annual interest rate : ");
    scanf("%d",&r);
    printf(" enter the time (in years) : ");
    scanf("%d",&n);
    i= interest( p, r, n);
    printf(" simpal interest is %d ",i);
}
int interest(int p,int r,int n){
return (p*r*n)/100;
}