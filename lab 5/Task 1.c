#include<stdio.h>
int main()
{
int a;
int b;
printf("Enter two numbers");
scanf("%d %d", &a, &b);
printf("First statement is (a-b) %d\n", a-b);
printf("Second statement is b*(a-b) %d\n", b*(a-b));
printf("Third statement is b*(a-b)/2 %d\n", b*(a-b)/2);
printf("Fourth statement is a+b*(a-b)/2 %d\n", a+b*(a-b)/2);
return 0;
}
