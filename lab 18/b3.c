#include<stdio.h>
int checkPrimeNumber(int number)
{
    int i, f = 1;
    for (i = 2; i <= number / 2; ++i) 
    {
        if (number % i == 0) 
        {
            f=0;
            break;
        }
    }
 
    return f;
}
void main()
{
    int num1, num2, j, f;
    printf("Enter lower interval = ");
    scanf("%d",&num1);
    printf("Enter upper interval = ");
    scanf("%d",&num2);
    printf("Prime numbers between %d and %d are: ",num1, num2);
    for (j = num1; j < num2; ++j) 
    {
        f = checkPrimeNumber(j);
        if (f==1) 
        {          
            printf("%d ",j);
        }
    }
}