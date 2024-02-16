#include <stdio.h>
void main(){
  int i=1,n;
  printf("enter the number till you want: ");
  scanf("%d",&n);
  while(i<=n){
  	if(i%2!=0){
      printf("odd number is: %d\n",i);
    }
  	i++;
  }	

}