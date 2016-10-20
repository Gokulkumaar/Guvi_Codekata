#include<stdio.h>
void main()
{
int year;
printf("Enter the year to find leap year or not\n");
scanf("%d",&year);
if(year%4==0)
printf("Entered year is leap year \n",year);
else
printf("Entered year is not leap year\n",year);
getch();
}
