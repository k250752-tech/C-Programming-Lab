#include<stdio.h>
#include<math.h>
int main()
{
double num;
printf("Enter a number: ");
scanf("%lf", &num);
if(num>0)
{
double sqrt_result= sqrt(num);
printf("Square root of a number is %.2lf", sqrt_result);
}
else
{
printf("cannot Calculate square root of negative number");
}
return 0;
}
