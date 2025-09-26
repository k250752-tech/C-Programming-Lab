#include<stdio.h>
int main()
{
int a, b;
printf("Enter two numbers: ");
scanf("%d%d", &a, &b);
printf("Sum of a and b is %d\n", a+b);
printf("Difference of a and b is %d\n", a-b);
printf("Product of a and b is %d\n", a*b);
printf("Quotient of a and b is %d\n", a/b);
printf("Remainder of quotient a and b is %d\n", a%b);
return 0;
}
