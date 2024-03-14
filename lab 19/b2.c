
#include<stdio.h>
void main()
{
    char s[100];
    int i;
    printf("Enter a string : ");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            s[i]-=32;
        }
    }
    printf("Uppercase = %s",s);
}
