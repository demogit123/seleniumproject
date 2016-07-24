#include<stdio.h>
#include<conio.h>
main()
{
int i,j,k,t=10;
clrscr();
for(i=1;i<=5;i++)
{
for(j=1;j<=t;j++)
{
printf(" ");
}
for(k=i;k>=1;k--)
{
printf("*");
}
printf("\n\n");
t=t-1;
getch();
}
}