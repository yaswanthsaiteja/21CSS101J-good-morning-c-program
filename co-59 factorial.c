#include<stdio.h>
int main()
{
printf("RA2211042010046\n");
int i,fact=1, number;
printf("Enter a number:");
scanf("%d", &number);
for(i=1;i<=number;i++)
{
fact=fact*i;
}
printf("Factorial of %d is %d", number, fact);
return 0;
}
