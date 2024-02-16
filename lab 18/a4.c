#include<stdio.h>
double max(double a,double b,double c);
void main () {
 double i;
 double a,b,c;
 printf("Enter the value of x,y,z:\n");
 scanf("%lf%lf%lf",&a,&b,&c);
 i= max(a,b,c) ;
 printf("%lf",i);

}
double max(double a,double b,double c) {
 double Max;
 Max=(a>b)?((a>c)?a:b):((b>c)?b:c);
 return Max;
}