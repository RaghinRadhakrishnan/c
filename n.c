#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i;
clrscr();
printf("Enter two number:");
scanf("%d %d",&a,&b);
for(i=1;i<=a;i++)
{
printf("%d",i++);
printf(i+b);
}
getch();
}
