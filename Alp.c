#include<stdio.h>
#include<conio.h>
void main()
{
char g;
clrscr();
        scanf("%c",&g);
    if( (g>='a'&& g<='z') || (g>='A' && g<='Z'))
       printf("%c is an alphabet",g);
    Else
       printf("%c is an Not an alphabet",g);
getch();
}
