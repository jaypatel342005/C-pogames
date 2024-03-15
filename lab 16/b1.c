
#include <stdio.h>
void main() 
{
  int rows,columns,i,j,temp=0;
  printf("Enter total number of rows : ");
  scanf("%d",&rows);
  printf("Enter total number of columns : ");
  scanf("%d",&columns);
  int arr[rows][columns];
  for(i=0;i<rows;i++)
  {
      for(j=0;j<columns;j++)
      {
        printf("Enter value of arr[%d][%d]",i,j);
        scanf("%d",&arr[i][j]);
      }
      printf("\n");
  }
  temp = i;
  i=j;
  j=temp;
  printf("Transpose of matrix = \n");
    for(i=0;i<columns;i++)
    {
        for(j=0;j<rows;j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
  
}
