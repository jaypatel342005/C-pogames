#include<stdio.h>
#include<string.h>
void main()
{
    int n;
   char s1[100],s2[100],s3[100],s4[100];
   printf("Enter value of s1 : ");
   scanf("%s",s1);
   printf("Enter value of s2 : ");
   scanf("%s",s2);
   printf("Length of s1 = %d and length of s2 = %d",strlen(s1),strlen(s2));
   printf("\nEnter value of n : ");
   scanf("%d",&n);
   printf("%d\n",strncmp(s1,s2,n));
   printf("%s\n",strcat(s1,s2));
   printf("%s\n",strcpy(s1,s2));
   printf("Reenter value of s1 : ");
   gets(s3);
    printf("Reenter value of s2 : ");
   gets(s4);
   printf("%s\n",strupr(s3,s4));
   printf("%s\n",strlwr(s3,s4));
   printf("%s %s",strev(s3),strrev(s4));
}