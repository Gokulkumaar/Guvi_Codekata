#include<stdio.h>
void main()
{
int i,num,sum=0;
printf("enter the integer \n");
scanf("%d",&num);
for(i=1;i<num;i++)
{
sum=sum+i;
}
printf("sum of first %d natural numbers =%d\n",num,sum);
}
