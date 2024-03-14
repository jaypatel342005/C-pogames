
#include<stdio.h>
float max(float,float,float);
void main()
{
    float a,b,c;
    printf("Enter value of a : ");
    scanf("%f",&a);
    printf("Enter value of b : ");
    scanf("%f",&b);
    printf("Enter value of c : ");
    scanf("%f",&c);
    float res = max(a,b,c);
    printf("Maximum = %f",res);
    
}
float max(float i,float j,float k)
{
    if(i>j)
    {
        if(i>k)
        {
            return i;
        }
        else if(j>k)
        {
            return j; 
        }
    }
    else
    {
        if(j>k)
        {
            return j;
        }
        else
        {
            return k;
        }
    }
}
