
#include<stdio.h>
int main()
{
char grade;
printf("Enter your grade (A/B/C):");
scanf("%C",&grade);
switch(grade)
{
case'A':
         printf("Excellent");
         break;
case'B':
         printf("Good");
         break;
case'C':
         printf("Average");
         break;
    default: printf("Invalid Grade");


}
return 0;

    }
