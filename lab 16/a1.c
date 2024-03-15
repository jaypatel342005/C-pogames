#include <stdio.h>
void main()
{
   int i,j,n,rows,columns;
   printf("Enter total number of rows : ");
   scanf("%d",&rows);
   printf("Enter total number of columns : ");
   scanf("%d",&columns);
   int arr[rows][columns];
     for(i=0;i<rows;i++)
  {
    for(j=0;j<columns;j++)
    {
      printf("Enter arr[%d][%d]: ",i,j);
      scanf("%d", &arr[i][j]);
    }
    printf("\n");
  }
   for(i=0;i<rows;i++)
   {
       for(j=0;j<columns;j++)
       {
           printf("%d ",arr[i][j]);
       }
       printf("\n");
   }
}