
#include <stdio.h>
void main()
{
   int i,j,n,pos=0,neg=0,zero=0,arr[3][3];
     for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("Enter arr[%d][%d]: ",i,j);
      scanf("%d", &arr[i][j]);
    }
    printf("\n");
  }
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
          if(arr[i][j] == 0)
          {
              zero = zero + 1;
          }
          if(arr[i][j]>0)
          {
              pos = pos + 1;
          }
          if(arr[i][j]<0)
          {
              neg = neg + 1;
          }
      }
  }
  printf("Positive elements = %d\n",pos);
  printf("Zero elements = %d\n",zero);
  printf("Negative elements = %d\n",neg);
}
