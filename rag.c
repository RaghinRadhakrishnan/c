#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Enter any number:");
scanf("%d",a);
if(a==0)
{
printf("zero");
}
else if(a>0)
{
printf("positive");
}
else
{
printf("negative");
}
getch();
}
