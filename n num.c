#include <stdio.h>
 
int main()
{
   int i, sum = 0, c, value;
 
   printf("Enter the number of integers you want to add\i");
   scanf("%d", &i);
 
   printf("Enter %d integers\i",i);
 
   for (c = 1; c <= i; c++)
   {
      scanf("%d", &value);
      sum = sum + value;
   }
 
   printf("Sum of entered integers = %d\i",sum);
 
   return 0;
}
