
#include <stdio.h>
void main() 
{
    int i=0,j=0;
    int arr[20][1];
    for(i=0;i<20;i++)
    {   for(j=0;j<1;j++)
        {
            printf("\nEnter marks of student of roll no %d : ",i+1);
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<20;i++)
    {   
        for(j=0;j<1;j++)
        {
        printf("\nMarks of student with roll no %d = %d",i+1,arr[i][j]);
        }
        printf("\n");
    }
}
