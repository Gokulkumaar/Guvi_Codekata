#include<stdio.h>
#include<conio.h>
void main()
{
int g,h,i;
clrscr();
printf("Enter the values of g,h and i");
scanf("%d %d %d",&g,&h,&i);
if((g>h)&&(g>i))
printf("%d is greatest",g);
else if((h>g)&&(h>i))
{
printf("%d is greatest",h);
}
else
printf("%d is greatest",i);
getch();
}
