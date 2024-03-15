#include<stdio.h>
void main()
{
    int i,j,rows,cols,sum=0;
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
                printf("\narr[%d][%d] : ",i,j);
                scanf("%d",&arr[i][j]);
            }
            printf("\n");
        }
        printf("Diagonal elements = ");
        for(i=0;i<rows;i++)
        {
            for(j=0;j<cols;j++)
            {
                if(i==j)
                {
                    printf("%d ",arr[i][j]);
                    sum = sum + arr[i][j];
                }
            }
            printf("\n");
        }
        printf("Sum of Diagonal elements = %d ",sum);
    }
    else
    {
        printf("Diagonal elements are not possible");
    }
}