#include<stdio.h>
int main()
{
int a, b;
printf("Enter two numbers: ");
scanf("%d %d", &a, &b);
printf(" a & b is %d\n", a & b);
printf(" a | b is %d\n", a | b);
printf(" a ^ b is %d\n", a ^ b );
printf("~a is %d\n", ~a);
printf(" a << 1 is %d\n", a << 1);
printf(" a >> 1 is %d\n", a >> 1);
return 0;
}
