#include<stdio.h>
int main()
{
int a, b, t;
printf("Enter your first number: ");
scanf("%d", &a);
printf("Enter your second number: ");
scanf("%d", &b);
t=a;
a=b;
b=t;
printf("The value of first number is: %d\n", a);
printf("The value of second number is: %d\n", b);
return 0;
}
