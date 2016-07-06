#include<stdio.h>
#include<conio.h>
int main()
{
int n,sum;
clrscr();
printf("\n enter number");
scan("%d",&n);
sum=0;
for(i=0;i<=n;n++)
{
sum=sum+i;
}
printf("sum is %d",sum);
getch();
}
