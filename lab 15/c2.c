#include <stdio.h>
void main()
{
   int position, i, n, value;
   printf("Enter number of elements in array\n");
   scanf("%d", &n);
    int array[n];
   printf("Enter %d elements\n", n);
 
   for (i = 0; i < n; i++)
   {
      scanf("%d", &array[i]);
   }
   printf("Enter the location where you wish to insert an element\n");
   scanf("%d", &position);
 
   printf("Enter the value to insert\n");
   scanf("%d", &value);
 
   for (i = n - 1; i >= position - 1; i--)
   {
      array[i+1] = array[i];
   }
      array[position-1] = value;
 
   printf("Resultant array is\n");
 
   for (i = 0; i <= n; i++)
   {
      printf("%d\n", array[i]);
   }
}