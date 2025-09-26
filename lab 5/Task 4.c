#include<stdio.h>
int main()
{
int m;
int n;
printf("Enter two numbers: ");
scanf("%d %d", &m, &n);
(m>n)? printf("%d is greater than %d", m, n) : printf("%d is greater than %d", n, m);
return 0;
}
