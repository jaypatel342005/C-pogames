#include<stdio.h>
void main(){
	int i=1,n=11,a,evencount=0,oddcount=0;
	while(i!=n){
		printf("enter number: ");
		scanf("%d",&a);
		if(a%2==0){evencount++;}
		else{oddcount++;}
	i++;
	}
	printf("total even number is: %d\n",evencount);
	printf("total odd number is: %d",oddcount);
}