#include<stdio.h>
int max(int,int);
void main(){
    int a,b,maxvalue;
    printf("enter the 1st number : ");
    scanf("%d",&a);
    printf("enter the 2nd number : ");
    scanf("%d",&b);
    maxvalue=max(a,b);
    printf("maximum number is %d",maxvalue);
}
int max(int a,int b ){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
    
    

