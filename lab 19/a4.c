
#include<stdio.h>
void main()
{
    int i;
    char s[100],c;
    printf("Enter a string : ");
    gets(s);
    printf("Enter a character of the string : ");
    scanf("%c",&c);
    for(i=0;s[i]!='\0';i++)
    {
        if(c == s[i])
        {
            printf("\nIt is at Element = %d ",i);
        }
    }
}
