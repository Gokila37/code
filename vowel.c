# include<stdio.h>
#include<conio.h>
int main()
{
char c;
clrcsr();
printf("\n enter the string");
scanf("%c",&c);
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
{
printf("this is vowels");
}
else
{
printf("\n this is char");
getch();
}
