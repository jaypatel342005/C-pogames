#include <stdio.h>
void main(){
  int i=1,n,sum=0;
  printf("enter the number till you want: ");
  scanf("%d",&n);
  while(i<=n){
    sum=sum+i;
    i++;
  } 
  printf("sum of number is: %d",sum);

}