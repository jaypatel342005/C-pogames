#include<stdio.h>
void len(char *s1);
void rev(char *s1);
void concat(char *s1,char *s2);
void copy(char *s1,char *s2);
void compare(char *s1,char *s2);  
void main()
{
    char s1[100],s2[100];
    int i;
    printf("Enter value of s1 :");
    scanf("%s",s1);
    printf("Enter value of s2 :");
    scanf("%s",s2);
    printf("\nPress 1. for length of s1\nPress 2. for reverse of s1\nPress 3. for concat of s1 and s2\nPress 4. for Copy of s1 and s2\nPress 5. for Compare of s1 and s2\n");
    scanf("%d",&i);
    switch(i)
    {
        case 1:
        len(s1);
        break;
        case 2:
        rev(s1);
        break;
        case 3:
        concat(s1,s2);
        break;
        case 4:
        copy(s1,s2);
        break;
        case 5:
        compare(s1,s2);
        break;
        default:
        printf("Invalid Option");
        break;
        
        
    }
}
void len(char *s1)
{
    int i;
    for(i=0;s1[i]!='\0';i++)
    {
    }
    printf("Length = %d",i);
}
void rev(char *s1)
{
    int i;
    for(i=0;s1[i]!='\0';i++)
    {
    }
    printf("Reverse = ");
    for(;i>=0;i--)
    {
        printf("%c",s1[i]);
    }
}
void concat(char *s1,char *s2)
{
    int i,j=0;
    for(i=0;s1[i]!='\0';i++)
    {
    }
    for(;s2[j]!=0;i++)
    {
        s1[i] = s2[j];
        j++;
    }
    printf("Concat = %s",s1);
}
void copy(char *s1,char *s2)
{
    int i;
   for (i = 0; s1[i] != '\0'; ++i) {
        s2[i] = s1[i];
    }

    s2[i] = '\0';
    printf("String s2: %s", s2);
}
void compare(char *s1,char *s2)
{
    int i;
    for(i = 0; s1[i] == s2[i] && s1[i] == '\0'; i++);
		   
  	if(s1[i] < s2[i])
   	{
   		printf("\n s1 is Less than s2");
	}
	else if(s1[i] > s2[i])
   	{
   		printf("\n s2 is Less than s1");
	}
	else
   	{
   		printf("\n s1 is Equal to s2");
	}
}