
#include<stdio.h>
void main()
{
    int i,j,rows,cols,count=0;
    printf("Enter no. of rows : ");
    scanf("%d",&rows);
    printf("Enter no. of columns : ");
    scanf("%d",&cols);
    int arr[rows][cols];
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("Arr[%d][%d] : \n",i,j);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
     for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            if(arr[i][j] == 0)
            {
            count = count + 1;
            }
        }
        printf("\n");
    }
       if(count>(i*j)/2)
       {
           printf("The Matrix is Sparse Matrix");
       }
       else
       {
           printf("The Matrix is not Sparse Matrix");
       }
}
