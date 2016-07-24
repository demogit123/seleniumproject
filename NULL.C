#include<stdio.h>
main()
{
int i=0;
char name[20];
clrscr();
printf("enter the string");
scanf("%s",&name);
while(name[i]!=NULL)
{
i++;
}
printf("%s string length is %d",name,i);
getch();
}

