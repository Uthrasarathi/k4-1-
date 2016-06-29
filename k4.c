#include<stdio.h>
void main()
{
char s;
clrscr();
scanf("%c",&s);
if(( s>='a' && s<='z' ) ||( s>='A' && s<='Z' ))
{
printf("alphabet\n");
}
else
{
printf("Not a alphabet\n");
}
getch();
}
