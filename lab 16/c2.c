#include<stdio.h>
void main()
{
    int i,j,rows,cols;
    printf("Enter no. of rows : ");
    scanf("%d",&rows);
    printf("Enter no. of columns : ");
    scanf("%d",&cols);
    int arr[rows][cols];
    if(rows == cols)
    {
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            if(i<=j)
            {
                printf("Arr[%d][%d] : ",i,j);
                scanf("%d",&arr[i][j]);
            }
            else 
            {
                arr[i][j] = 0;
            }
        }
        printf("\n");
    }
    
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    }
    
    else
    {
        printf("Not Possible as it is not Square Matrix");
    }
}