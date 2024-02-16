#include <stdio.h>
void main(){
int a,b,c,max;
printf("enter the 1st number : ");
scanf("%d",&a);
printf("enter the 2st number : ");
scanf("%d",&b);
printf("enter the 3st number : ");
scanf("%d",&c);
max=a>b?(a>c?a:c):(b>c?b:c);
printf("largest number is ,%d",max);
}
