#include<stdio.h>
int main()
{
int password = 1234;
int entered_password;
printf("Enter password: ");
scanf("%d", &entered_password);
if(entered_password==password)
{
printf("Access Granted");
}
else
{
printf("Access Denied");
}
return 0;
}
