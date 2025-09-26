#include<stdio.h>
int main()
{
int age;
float height;
printf("Enter your age: ");
scanf("%d", &age);
printf("Enter your height: ");
scanf("%f", &height);
printf("Your age is %d \n", age);
printf("Your height is %.2f", height);
return 0;
}
