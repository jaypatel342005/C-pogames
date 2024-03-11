#include<stdio.h>
void main()
{
    char str[100];
    int i,count=0;
    printf("Enter a string of length from (0-99) : ");
    gets(str);
    puts(str);
    for(i=0;str[i]!='\0';i++)
    {
        count++;
    }
    printf("Length of String = %d",count);
    
}