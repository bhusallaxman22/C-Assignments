#include<stdio.h>
#include<conio.h>
int main(){
int num, i=2;
printf("enter a number");
scanf("%d", &num);
while (i<num)
{
if (num%i==0)
{
printf("Not a Prime number");
break;
}
i++;
}
if (i==num)
{
printf("It is a prime number");
getch();
}
}