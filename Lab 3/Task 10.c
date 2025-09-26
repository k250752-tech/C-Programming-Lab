#include<stdio.h>
int main()
{
int years, months, days;
printf("Enter your age in years: ");
scanf("%d", &years);
months=years*12;
days=years*365;
printf("Your age in months: %d\n", months);
printf("Your age in days: %d\n", days);
return 0;
}
