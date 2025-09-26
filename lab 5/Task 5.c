#include<stdio.h>
int main()
{
int c_num;
char grade;
printf("Enter your course number (1-3): ");
scanf("%d",&c_num);
switch(c_num)
{
case 1:
case 2:
case 3:
printf("Enter grade for course %d: ", c_num);
scanf(" %c", &grade);
switch(grade)
{ case 'A':
case 'a':
printf("Excellent, you got an A in course %d", c_num);
break;
case 'B':
case 'b':
printf("Good Job, you got B in course %d", c_num);
break;
case 'C':
case 'c':
printf("Fair, you got C in course %d", c_num);
break;
case 'D':
case 'd':
printf("Needs improvement, you got D in course %d",

c_num);

break;
case 'F':
case 'f':
printf("Fail, you got F in course %d", c_num);
break;
default:

printf("Invalid input");

}
break;
default:
printf("Invalid input");

}
return 0;
}
