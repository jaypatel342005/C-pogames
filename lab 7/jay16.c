#include <stdio.h>
void main(){
int a,b,d;
char c;
float f;
printf("enter thr 1st number: ");
scanf("%d",&a);
printf("enter thr 2st number: ");
scanf("%d",&b);
printf("enter the sine(+=adiition,-=subtrection,*=multiplication,/=division) : ");
scanf(" %c",&c);
switch(c){
	case '+':
	d=a+b;printf("%d",d);
	break;
	case '-':
	d=a-b;printf("%d",d);
	break;
	case '*':
	f=a*b;printf("%f",f);
	break;
	case '/':
	f=a/b;printf("%f",f);
	break;

}
}

