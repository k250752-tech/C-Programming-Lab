#include<stdio.h>
int main()
{
int x,y,z, max;
printf("Enter three numbers: ");
scanf("%d %d %d", &x, &y, &z);
if(x>y)
{
if(x>z)
{
max=x;
}
else
{
max=z;
}
}
else if(y>x)
{
if(y>z)
{
max=y;
}
else
{
max=z;
}
}
printf("The largest number is %d", max);
return 0;
}
