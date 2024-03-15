
#include <stdio.h>
void main() 
{
  int rows,columns,i,j;
  printf("Enter total number of rows : ");
  scanf("%d",&rows);
  printf("Enter total number of columns : ");
  scanf("%d",&columns);
  int arr1[rows][columns],arr2[rows][columns],res[rows][columns];
  for(i=0;i<rows;i++)
  {
      for(j=0;j<columns;j++)
      {
          printf("Enter value of array1[%d][%d] : ",i,j);
          scanf("%d",&arr1[i][j]);
          printf("Enter value of array2[%d][%d] : ",i,j);
          scanf("%d",&arr2[i][j]);
          res[i][j] = arr1[i][j]+arr2[i][j];
      }
      printf("\n");
  }
  printf("Addition of matrix = \n");
  for(i=0;i<rows;i++)
  {
      for(j=0;j<columns;j++)
      {
          printf("%d ",res[i][j]);
      }
      printf("\n");
  }
  
}
