#include<stdio.h>
int main()
{
int by, cy, age;
printf("Enter your Birthyear: ");
scanf("%d", &by);
printf("Enter current year: ");
scanf("%d", &cy);
age=cy-by;
printf("Your age is %d", age);
return 0;
}
