#include<stdio.h>
void main(){
  int i,n;
  printf("enter 1st number: ");
  scanf("%d",&i);
   printf("enter last number: ");
  scanf("%d",&n);
  while(i<n){
  	if(i%2==0){
      printf("%d\n",i);
    }
  	i++;
  }	

}