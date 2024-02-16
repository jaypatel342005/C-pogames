#include<stdio.h>
void main(){
    int a,b,c;
     printf("enter the value of a : ");
    scanf("%d",&a);
     printf("enter the value of b : ");
    scanf("%d",&b);
     printf("enter the value of c : ");
    scanf("%d",&c);
    if(a>b){
        if(a>c){
            printf("%d is the lhe largest number ",a);
        }
        else{
            printf("%d is the largest number ",c);
        }
     }
    else if (a<b){
        if(b>c){
            printf("%d is the largest number ",b);
        }
        else{
            printf("%d is the largest number ",c);
        }
        
    }
    
}
