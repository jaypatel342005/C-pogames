#include <stdio.h>
void main(){
int n;
printf("enter the number: ");
scanf("%d",&n);
n=n%7;
switch(n){
 case 0:
printf("sunday");
break ;
case 1:
printf("monday");
break ;
case 2:
printf("tuesday");
break ;
case 3:
printf("wednesday");
break ;
case 4:
printf("thursday");
break ;
case 5:
printf("friday");
break ;
case 6:
printf("satuderday");
break ;
}
}