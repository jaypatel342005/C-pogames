
#include<stdio.h>
void main()
{
    int i,pos;
    char s[100],c,value;
    printf("Enter a string : ");
    gets(s);
   
    printf("Enter element number you want to change : ");
    scanf("%d",&pos);
    fflush(stdin);
    printf("Enter the value of the element : ");
    scanf("%s",&value);
   
    s[pos-1] = value;
    
     printf("%s",s);
  
}
