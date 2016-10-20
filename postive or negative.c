#include<stdio.h>
#include<conio.h>
void main()
{
 int g;
 clrscr();
 printf("Enter the Number\n");
 scanf("%d",&g);
 if(g>0)
 printf("\nThe entered Number %d is Positive\n",g);
 else if(g<0)
 printf("\nThe entered Number %d is Negative",g);
 else
 printf("\nThe entered Number is Zero\n");
 getch();
 }
